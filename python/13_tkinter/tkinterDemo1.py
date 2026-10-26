# import tkinter as tk

# root=tk.Tk()
# root.geometry("300x400")
# root.title("My First Frame")

# root.mainloop()

# import tkinter as tk
# def on_click():
#  print("Button clicked!")
# window = tk.Tk()
# window.title("Button Example")
# button = tk.Button(window, text="Click Me", command=on_click)
# button.pack()
# window.mainloop()


# import tkinter as tk
# window = tk.Tk()
# window.title("Entry Example")
# entry = tk.Entry(window)
# entry.pack()
# def show_text():
#  print("Entered Text:", entry.get())
# button = tk.Button(window, text="Submit", command=show_text)
# button.pack()
# window.mainloop()


# import tkinter as tk
# window = tk.Tk()
# window.title("Checkbox Example")
# lang1 = tk.IntVar()
# lang2 = tk.IntVar()
# tk.Checkbutton(window, text="Python", variable=lang1).pack()
# tk.Checkbutton(window, text="Java", variable=lang2).pack()
# def show_selection():
#  selected = []
#  if lang1.get(): selected.append("Python")
#  if lang2.get(): selected.append("Java")
#  print("Selected:", ", ".join(selected))
# tk.Button(window, text="Submit", command=show_selection).pack()
# window.mainloop()


# import tkinter as tk
# window = tk.Tk()
# window.title("Listbox Example")
# listbox = tk.Listbox(window)
# items = ["Apple", "Banana", "Cherry", "Date"]
# for item in items:
#  listbox.insert(tk.END, item)
# listbox.pack()
# def show_selected():
#  selected = listbox.get(listbox.curselection())
#  print("Selected:", selected)
# tk.Button(window, text="Show Selection", command=show_selected).pack()
# window.mainloop()


import tkinter as tk
from tkinter import messagebox
def show_about():
 messagebox.showinfo("hello","welcome to python")
def exit_app():
 window.quit()
window = tk.Tk()
window.title("Menu Bar Example")
menu = tk.Menu(window)
file_menu = tk.Menu(menu, tearoff=0)
file_menu.add_command(label="Exit", command=exit_app)
menu.add_cascade(label="File", menu=file_menu)

help_menu = tk.Menu(menu, tearoff=0)
help_menu.add_command(label="About", command=show_about)
menu.add_cascade(label="Help", menu=help_menu)
window.config(menu=menu)
window.mainloop()
