def my_decorator(func):
    def wrapper():
        print("1. Something is happening BEFORE the function is called.")
        func()  # This executes the original function
        print("2. Something is happening AFTER the function is called.")
    return wrapper

@my_decorator
def say_hello():
    print("   Hello, World!")

def check_user(f):
    def wrapper():
        print("Checking user profile ")
        f()
    return wrapper

@check_user
def getUser():
    print("User = hadi, age = 10 ")

# getUser()

# Call the decorated function
# say_hello()


# --------------
class Date:
    def __init__(self, day, month, year):
        self.day = day
        self.month = month
        self.year = year

    # Alternative constructor
    @classmethod
    def from_string(cls, date_as_string):
        # Splits "DD-MM-YYYY" string and unpacks it into the constructor
        day, month, year = map(int, date_as_string.split('-'))
        return cls(day, month, year)  # cls refers to the 'Date' class itself

# Standard way to instantiate
date1 = Date(7, 9, 2026)

# Using the classmethod factory
date2 = Date.from_string("07-09-2026")

class MathUtilities:
    @staticmethod
    def is_even(number):
        # Pure function: independent of class or instance properties
        return number % 2 == 0

# You can call it directly on the class without instantiating it
print(MathUtilities.is_even(10))  # Output: True
