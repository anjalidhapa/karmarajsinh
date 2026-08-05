print('TO FIND LARGEST NUMBER\n')

a=int(input("Enter number a:"))
b=int(input("\nEnter number b:"))
c=int(input("\nEnter number c:"))

if (a<=b):
    if(b<c):
        print('c is largest')
    elif(c<b and a<b):
        print('b is largest')
    elif(c<b and a==b):
        print('a and b are largest')
elif (b<a) :
    if(a<c):
        print('c is largest')
    else:
        print('a is largest')
