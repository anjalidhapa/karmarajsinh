class Parent:
    def greet(self):
        print("Hello ")

class Child(Parent):
    def greet(self):
        print("Cosmos ")
    
   
c = Child()
c.greet()   