class Demo:
    def __init__(self, name="user"):
        self.name = name
        self.age = int(input("Enter your age : "))

    def greet(self, name):
        # self.name = name
        print(f"Hello {self.name} | {name} | age = {self.age}")

d1 = Demo("Hadi")
d1.greet("xyz")

d2 = Demo("cosmos ")
d2.greet("abcd")
