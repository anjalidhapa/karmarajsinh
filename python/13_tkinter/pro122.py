import tkinter as tk

window = tk.Tk()
window.title("Radio Button Example")

choice = tk.StringVar(value="None")

tk.Radiobutton(window, text="Male", variable=choice, value="Male").pack()
tk.Radiobutton(window, text="Female", variable=choice, value="Female").pack()

def show_choice():
 print("Selected:", choice.get())

tk.Button(window, text="Submit", command=show_choice).pack()

window.mainloop()