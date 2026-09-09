import json

data = {
    "name": "hadi",
    "age": 10
}

print(data, type(data))


json_data = json.dumps(data)
print(json_data, type(json_data))


user_data = json.loads(json_data)
print(user_data, type(user_data))