name = input("Enter your name : ")
print(name)

print(name.capitalize())
print(name.lower())
print(name.upper())

print(name.count("hadi"))

print(name.endswith("ya"))
print(name.startswith("ya"))

print(name.find("di"))

# print(name.index("di"))

print(name.replace("di", "HADI "))

print(list(reversed(name)))

print(name.split("-"))

li = list(name)
print(li)

print("".join(li))