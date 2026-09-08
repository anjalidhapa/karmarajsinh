# route = url + end-point 

# route = https://jsonplaceholder.typicode.com/todos/1
# route = https://jsonplaceholder.typicode.com/todos


# get -> fetch 
# post -> insert / create

# put -> update 
# delete -> delete data

import requests

data = requests.get("https://jsonplaceholder.typicode.com/todos/70")
print(data.json())
print(data.status_code)


# 2xx -> success
# 4xx -> user side error
# 5xx -> server side error