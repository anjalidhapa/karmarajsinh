f= open("pro58.txt","w")

f.write("hello world\n")
f.write("stars\n")
f.write("moon\n")

f.close

with open("pro58.txt","r") as f :
    data = f.readline()
    print(data)