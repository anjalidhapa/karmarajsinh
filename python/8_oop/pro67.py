class Student:
    SCHOOL=input("ENTER SCHOOL NAME: ")

    def __init__(self,name="UNKNOWN"):
        name=input("ENTER NAME:")
        self.name = name

    def Print(self):
        print(f"NAME: {self.name}")
        print(f"SCHOOL: {Student.SCHOOL}")
a  = Student()
a.Print()
