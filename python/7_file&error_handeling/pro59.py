f= open("pro59.txt","w")

f.write("hello world")

f.close

with open("pro59.txt","a") as f :
    f.write("\nhello !!!!!!")

with open("pro59.txt","r") as f :
    data = f.read()
    print(data)