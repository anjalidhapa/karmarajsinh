
import requests
API = "8392cd77468be85fcb07a2290cc8844a"

city_name = input("Enter city name : ")

data = requests.get(f"https://api.openweathermap.org/data/2.5/weather?q={city_name}&appid={API}&units=metric")

print(data.json())