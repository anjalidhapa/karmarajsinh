class person:
    def __init__(self,name="UNKNOWN",age=00):
        name=input("ENTER NAME:")
        age=int(input("ENTER AGE:"))
        self.name = name
        self.age = age

    def Print(self):
        print(f"NAME: {self.name}")
        print(f"AGE: {self.age}")

a  = person()
a.Print()
