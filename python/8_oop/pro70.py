class a:
    def greet(self):
        print("HEllO")

class b:
    def message(self):
        print("Message from Robot")

class c(a,b):
    def end(self):
        print("Good Bye")

abc=c()
abc.greet()
abc.message()
abc.end()