user = {
    # "key": "value",
    "name": "Hadi",
    "age": 10,
    "course": "Python",
    "pass": True
}

print(user)
print(user['age'])

user['gender'] = "male"
print(user)

# print(user['first_name'])
print(user.get('first_name'))

if 'first_name' in user:
    print(user['first_name'])

print('-------------------')
for k in user:
    print(k, user[k])

print('-------------------')
print(user.values())

print('-------------------')
for i in user.values():
    print(i)

print('-------------------')
print(user.items())

print('-------------------')
for k, v in user.items():
    print(k, v)

