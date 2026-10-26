import tkinter as tk

def on_click():
    print("Button clicked")

root=tk.Tk()
root.title("button")

button=tk.Button(root, text="Click Me", command=on_click)
button.pack()
root.mainloop()

