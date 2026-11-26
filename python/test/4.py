print("handaling ValueError ")

try:
    a=int(input("Enter a integer : "))
except ValueError as e:
    print(e)