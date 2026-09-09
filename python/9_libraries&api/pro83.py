import requests


int_data={
    'name': 'sky',
    'age': 10
}
        
data = requests.post("https://jsonplaceholder.typicode.com/todos", json=int_data)

x = data.json()

print(x)

print(data.status_code)
