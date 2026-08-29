f= open("pro60.txt","w")

f.write("hello world\n")
f.write("hello ")

f.close
a=-1
with open("pro60.txt","r") as f :

    data = f.read()
    print(len(data))