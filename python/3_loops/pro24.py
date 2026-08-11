nums = [2, 3, 4, 5, 6]

nums = list(range(2, 11, 2))
print(nums)


for i in nums:
    print(i)


print(enumerate(nums))

evenSum = 0
oddSum = 0

for key, val in enumerate(nums):
    # print(key, val)
    if key % 2 == 0:
        evenSum += val
    else:
        oddSum += val

print(evenSum, oddSum)