def greet(name = "user "):
    print(f"Hello {name} ")

greet("hadi ") # fun call
greet("Cosmos ") # fun call
greet() # fun call

def getSum(num1 = 0, num2 = 0):
    sum = num1 + num2
    # print(f"sum = {sum}")
    return sum

def getSub(num1 = 0, num2 = 0):
    return num1 - num2

ans = getSum(2, 3)
print(f"ans = {ans}")

print(f"ans = {getSum(4, -3)}")

print(f"getSub = {getSub                                                                                                                                                                                                                                              (4, -3)}")

# f(x, y) = x + 2y 
# f(2, 3) = 8