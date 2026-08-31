try:
    no=int(input("enter no:"))
    ans=10*no
    if(no<=0):
        raise ValueError("invalid int covertion")
    else:
        print(f'ans:{ans}')

except ValueError as e:
    print("ERROR:",e)