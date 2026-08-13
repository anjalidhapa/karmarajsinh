import math

print(math.sqrt(36))

print(math.ceil(32.123))
print(math.floor(32.123))

print(math.cbrt(8))
print(math.sqrt(8))

print(math.fabs(-2.3))
print(math.e)
print(math.pi)
print(math.inf)


print(math.gcd(6, 8))
print(math.pow(2, 3))
print(2 ** 3)

print(math.factorial(5))
print(math.sin(360))
print(math.cos(360))
print(math.tan(360))

print(math.sinh(360))
print(math.cosh(360))
print(math.tanh(360))

import random

print(random.randint(1, 6))  
print(random.randrange(0, 100, 5))  

arr = list(range(3, 102, 3))
print(arr)

print("random choice = ", random.choice(arr), random.choice(arr))
arr.remove(random.choice(arr))
print(arr)


import datetime

# Get current date and time
current_datetime = datetime.datetime.now()
print("Now:", current_datetime) 
# Output: 2026-08-13 09:34:28.123456

# Get only the current date
today_date = datetime.date.today()
print("Today:", today_date) 
# Output: 2026-08-13

