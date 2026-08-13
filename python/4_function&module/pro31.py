i=1
fact=1

def factorial(a=1):
    if a <= 1:
        return 1
    return a * factorial(a - 1)

a=int(input("Enter value to find it's factorial : "))
for i in range(1,a+1):
    print(f"{i}! = {factorial(i)}")

# print(factorial(a))

