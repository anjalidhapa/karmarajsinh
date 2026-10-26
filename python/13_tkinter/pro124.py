import tkinter as tk
from tkinter import messagebox

def f_exit():
    root.quit()

def f_info():
    messagebox.showinfo("about","This is created using python")

root = tk.Tk()
root.title("menu bar")

menu = tk.Menu(root)
file_menu = tk.Menu(menu,tearoff=0)
file_menu.add_command(label="Exit",command=f_exit)
menu.add_cascade(label="File", menu=file_menu)

info_menu = tk.Menu(menu,tearoff=0)
info_menu.add_command(label="info",command=f_info)
menu.add_cascade(label="info", menu=info_menu)

root.config(menu=menu)
root.mainloop()
