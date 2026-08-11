a=int(input("Enter a value:"))
while(a!=0):
    a=a//10
    if a==1:
        print("break")
        break
    else :
        print("not break")