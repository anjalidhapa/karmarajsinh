try:
    file= open("pro60.txt","r")

except FileNotFoundError:
    print("file not found")
else:
    print(file.read())
finally:
    print("executed succesfully")