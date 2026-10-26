import tkinter as tk


root=tk.Tk()
root.title("list")
listbox= tk.Listbox(root)
items = ["M4","M8","gt3rs","gt2rs"]

for item in items:
 listbox.insert(tk.END, item)
listbox.pack()

def show_selected():
 selected = listbox.get(listbox.curselection())
 print("Selected:", selected)


tk.Button(root, text="Submit", command=show_selected).pack()

root.mainloop()