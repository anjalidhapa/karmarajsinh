str=input("Enter a word to find if it's pelindrome: ")
a=list(reversed(str))
a="".join(a)

if (str==a):
    print("word is pelindrome")
else:
    print("word is not pelindrome")