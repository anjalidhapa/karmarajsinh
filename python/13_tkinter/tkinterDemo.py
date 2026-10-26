# import tkinter as tk
# from tkinter import messagebox
# def greet():
#     # print("button clicked")
#     messagebox.showinfo("Message","you clicked on button")

# root=tk.Tk()
# root.title("My first frame")
# root.geometry("300x500")
# l1=tk.Label(root,text="Welcome to Tkinter",bg="yellow", width="50",fg="blue",font=("serif",30,"bold"))
# l1.pack(anchor="w",padx=10,pady=20)
# btn=tk.Button(root,text="Click me",command=greet)
# btn.pack(pady=20)
# root.mainloop()


import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.geometry("300x300")
root.resizable(500,500)

def submit():
    if(not user.get() or not password.get()):
        messagebox.showerror("Error","Please Fill All FIelds")
    else:
         messagebox.showinfo("Success",f"WElcome back {user.get()}")
user=tk.Entry(root)
user.pack(pady=20)
password=tk.Entry(root,show="*")
password.pack(pady=20)

btn=tk.Button(root,text='Submit',command=submit)
btn.pack(pady=20)

root.mainloop()





