class Demo:
    def __init__(self):
        self.name = input("Enter your name : ")
        self.age = int(input("Enter your age : "))

    def __str__(self):
        return f"name = {self.name} | age = {self.age}"

d = Demo()
print(d)