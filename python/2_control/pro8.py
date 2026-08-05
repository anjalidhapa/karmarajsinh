print('TO FIND IN WHICH AGE GROUP YOU BELONG')
a=int(input("Enter your age :"))

if (a<10):
    print("You are a child")
elif (a>=10 and a<18):
    print("You are a teenager")
elif (a>=18 and a<60):
    print("You are a adult")
else :
    print("You are a senior citizen")