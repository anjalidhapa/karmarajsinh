import sqlite3
import tkinter as tk
from tkinter import ttk, messagebox
from datetime import datetime
import matplotlib.pyplot as plt
DB_NAME = "budget_tracker.db"
def initialize_database():
 conn = sqlite3.connect(DB_NAME)
 cursor = conn.cursor()
 cursor.execute('''
 CREATE TABLE IF NOT EXISTS transactions (
 id INTEGER PRIMARY KEY AUTOINCREMENT,
 date TEXT,
 category TEXT,
 description TEXT,
 amount REAL,
 type TEXT
 )
 ''')
 conn.commit()
 conn.close()
def add_transaction(category, description, amount, trans_type):
 conn = sqlite3.connect(DB_NAME)
 cursor = conn.cursor()
 cursor.execute('''
 INSERT INTO transactions (date, category, description, amount, type)
 VALUES (?, ?, ?, ?, ?)
 ''', (datetime.now().strftime("%Y-%m-%d %H:%M:%S"), category, description,
amount, trans_type))
 conn.commit()
 conn.close()
def fetch_transactions():
 conn = sqlite3.connect(DB_NAME)
 cursor = conn.cursor()
 cursor.execute("SELECT * FROM transactions")
 rows = cursor.fetchall()
 conn.close()
 return rows
def visualize_expenses():
 conn = sqlite3.connect(DB_NAME)
 cursor = conn.cursor()
 cursor.execute('''
 SELECT category, SUM(amount) FROM transactions
 WHERE type = 'expense'
 GROUP BY category
 ''')
 data = cursor.fetchall()
 conn.close()
 if not data:
  messagebox.showinfo("Info", "No expenses to display.")
 return

 categories = [row[0] for row in data]
 amounts = [row[1] for row in data]
 plt.figure(figsize=(6, 6))
 plt.pie(amounts, labels=categories, autopct='%1.1f%%', startangle=140)
 plt.title("Expenses by Category")
 plt.show()
def main_app():
 initialize_database()
 root = tk.Tk()
 root.title("Budget Tracker")
 root.geometry("400x300")
 tk.Label(root, text="Category:").pack()
 category_entry = tk.Entry(root)
 category_entry.pack()
 tk.Label(root, text="Description:").pack()
 description_entry = tk.Entry(root)
 description_entry.pack()
 tk.Label(root, text="Amount:").pack()
 amount_entry = tk.Entry(root)
 entry = tk.Entry(root)
 amount_entry.pack()
 trans_type = tk.StringVar(value="expense")
 tk.OptionMenu(root, trans_type, "expense", "income").pack()
 def submit_transaction():
  try:
    amt = float(amount_entry.get())
    add_transaction(category_entry.get(), description_entry.get(),amt, trans_type.get())
    messagebox.showinfo("Success", f"{trans_type.get().title()}added!")
  except ValueError:
    messagebox.showerror("Error", "Invalid amount!")
  tk.Button(root, text="Add Transaction",command=submit_transaction).pack(pady=5)
  tk.Button(root, text="View Transactions", command=lambda:
  print(fetch_transactions())).pack(pady=5)
  tk.Button(root, text="Visualize Expenses",command=visualize_expenses).pack(pady=5)
  root.mainloop()
if __name__ == "__main__":
 main_app()