f= open("pro57.txt","w")

f.write("hello world")

f.close

with open("pro57.txt","r") as f :
    data = f.read()
    print(data)