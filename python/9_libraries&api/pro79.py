import random

arr=[1,20,15,54,74,87,35,48,42]

a=random.choice(arr)

print(f"random choise = {a}")

arr=[random.randint(0,100) for x in range(0,10)]

print(f"rnadom int: {arr}")