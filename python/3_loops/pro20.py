a=int(input("Enter value to reverse it :"))
rev=0
ld=0
while(a!=0):
    ld=a%10
    a=a//10
    rev=rev*10+ld
print(f"reverse of a ---> {rev}")