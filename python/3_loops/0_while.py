
num = int(input("Enter a number "))
sum = 0

while num != 0:
    ld = num % 10 # last digit
    sum += ld
    num //= 10 # remove last digit -> num = num // 10
    # 123 // 10 -> 12

print("sum = ", sum)
