i=1
fact=1
def factorial(a=1):
    return fact==fact*a
a=int(input("Enter value to find it's factorial : "))
for i in range(1,a+1):
    factorial(i)
print(f"factorial : {fact}")