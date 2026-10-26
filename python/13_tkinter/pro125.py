import tkinter as tk
from tkinter import messagebox

def check():
    if u_name.get()=="admin" and password.get()=="123":
        messagebox.showinfo("success","login successfull")
    else:
        messagebox.showinfo("failed","login failed")


root=tk.Tk()
root.title("login")

u_name=tk.Entry(root)
u_name.pack()
password=tk.Entry(root)
password.pack()

submit=tk.Button(root,text="enter", command=check)
submit.pack()
root.mainloop()