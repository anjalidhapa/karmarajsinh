li = [3, 2, 4, 5, 6] * 3

print(li)
print(li[2])
print(li[-2])

print(f"slice = {li[3:13]}")
print(f"slice = {li[3:13:3]}")

print(f"len = {len(li)}")


print(f"li[:8] = {li[:8]}")
print(f"li[8:] = {li[8:]}")

print("-"*24)
print(f"li = {li}")
print(f"rev = {li[::-1]}")
print("-"*24)

arr = [x for x in range(3, 101, 5) if x % 2 == 0]
print(arr)


print('----------- for loop -------------------')
for i in arr:
    print(i, end = " ")

print('\n\n----------- for loop -------------------')

n = len(arr)   
print(n)
for i in range(n):
    print(arr[i], end = " ")

print('\n\n----------- enumerate fun -------------------')

for i, v in enumerate(arr):
    print(i, v)
    