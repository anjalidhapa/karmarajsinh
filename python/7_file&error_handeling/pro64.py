try:
    no=int(input("enter no:"))
    ans=100/no
    print(f'ans:{ans}')

except ZeroDivisionError as ze:
    print("number must not be equal to 0", ze)

except ValueError as e:
    print(e)