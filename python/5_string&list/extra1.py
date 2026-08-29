'Finding second largest number'

li=[1,5,21,58,21,43,69,54]

a=max(li)
b=0

for i in range(0,8):

    if (li[i] < a and li[i] > b):
        b=li[i]
        print(b)

print(f"2nd largest number is ---> {b}")