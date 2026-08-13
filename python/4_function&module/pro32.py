import math
x=int(input("1) square root \n2) factoraial \n3) pi \nEnter your choise"))
if (x==1):
    a=int(input("Enter a number to find it's square root: "))
    print(math.sqrt(a))

elif (x==2):
    a=int(input("Enter a number to find it's factorial: "))
    print(math.factorial(a))

elif(x==3):
    print(f"pi={math.pi}")

else:
    print("Invalid output")