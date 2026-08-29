sett = {3, 4, 2, 1, 3, 4, 5, 3, 2, 1}
print(sett)
print(type(sett))

sett.add(30)
print(sett)


sett.remove(3)
print(sett)
removed = sett.pop()
print(sett, removed)

sett.clear()
print(sett)

print("\n", "-" * 24, "\n")

s1, s2 = {3, 2, 4, 5, 2, 9, -1, -6}, {4, 5, 3, 2, 4, 7, 8, 2}

print(s1 | s2)
print(s1.union(s2))

print("\n", "-" * 24, "\n")

print(s1 & s2)
print(s1.intersection(s2))

print("\n", "-" * 24, "\n")
print(s1 - s2)
print(s1.difference(s2))