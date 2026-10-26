import tkinter as tk


root=tk.Tk()
root.title("entry")
entry=tk.Entry(root)
entry.pack()
def on_click():
    print("submited",entry.get())
button=tk.Button(root, text="Click Me", command=on_click)
button.pack()
root.mainloop()