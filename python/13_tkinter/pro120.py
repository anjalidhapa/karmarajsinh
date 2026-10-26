import tkinter as tk

def add():
    result=float(entry1.get())+float(entry2.get())
    label_result.config(text="Result: " + str(result))

root=tk.Tk()
root.title("calculator")

entry1=tk.Entry(root)
entry1.pack()

entry2=tk.Entry(root)
entry2.pack()

button=tk.Button(root, text="add", command=add)
button.pack()
label_result=tk.Label(root , text=("result:"))
label_result.pack()

root.mainloop()