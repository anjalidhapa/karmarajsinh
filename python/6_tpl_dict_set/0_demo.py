tpl = (3, 3, 4, 2, 1, 4)

print(tpl)
print(type(tpl))


print(tpl.count(3))
print(tpl.index(3))

tpl = list(tpl)
print(tpl)
print(type(tpl))

print(tpl[3])
tpl[3] = 30
print(tpl[3])

tpl = tuple(tpl)
print(tpl)
print(type(tpl))


data = ('first val', 'sec val', 'third val')

firstVar, secVar, thirdVar = data
print(firstVar, secVar)