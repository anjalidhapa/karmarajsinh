class Parent:
    def greet(self):
        print("Hello World")

class Child(Parent):
    def greet(self):
        print("hi")

a= Child()
a.greet()