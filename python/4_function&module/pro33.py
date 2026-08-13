import random
# arr=random.randint(1,10)

arr = [32, 12, 4, 23]
print(arr)
print(random.choice(arr))

# generate list of rand nums 
arr = [random.randint(a=3, b = 100) for x in range(0, 10)]
print(arr)
