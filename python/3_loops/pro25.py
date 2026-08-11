num = int(input("Enter a number : "))

isPrime = True

for i in range(2, num):
    if not num % i:
        isPrime = False
        break

if isPrime:
    print("Given number is prime ")
else:
    print("Num is normal ")


# ternary operator in python
print("Given number is prime ") if isPrime else print("Num is normal ")

print("Given number is prime " if isPrime else "Num is normal ")



# if not num % 2 => if num % 2 == 0
# 12 % 2 = 0 => not 0 -> 1