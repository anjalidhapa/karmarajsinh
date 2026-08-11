a=int(input("Enter a number to find it's factorial:"))
ans=1
for i in range(1,a+1):
    ans*=i
print(f"ans:{ans}")