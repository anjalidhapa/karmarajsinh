import tkinter as tk


root=tk.Tk()
root.title("check")

def check_select():
    selected = []
    if lang1.get() : selected.append("python")
    if lang2.get() : selected.append("java")
    print("Selected", "-".join(selected))


lang1 = tk.IntVar()
lang2 = tk.IntVar()

check=tk.Checkbutton(root, text="python", variable=lang1 )
check.pack()


check=tk.Checkbutton(root, text="java", variable=lang2 )
check.pack()

tk.Button(root, text="Submit", command=check_select).pack()

root.mainloop()