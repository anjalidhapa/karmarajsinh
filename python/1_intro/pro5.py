op=input("enter operator:")
a=int(input("\nEnter number a:"))
b=int(input("\nEnter number b:"))

if (op=='+'):
    ans=a+b
elif (op=='-'):
    ans=a-b
elif (op=='*'):
    ans=a*b
elif (op=='/'):
    ans=a/b
elif (op=='%'):
    ans=a%b
else :
    print("enter valid operator")

print(f"\nanswer`={ans}\n\n")