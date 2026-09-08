class Parent:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def printData(self):
        print(f"name = {self.name} | age = {self.age}")

class Child(Parent):
    def __init__(self, name="asdf", age=21, standard=4):
        super().__init__(name, age)
        self.standard = standard

    def printDets(self):
        print(f"name = {self.name} | age = {self.age} | standard = {self.standard}")

c1 = Child("cosmos", 10, 3)
c1.printDets()
c1.printData()