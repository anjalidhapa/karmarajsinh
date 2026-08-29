# f = open("demo.txt", "w")

# f.write("demo content from demo.py file 1 \n")
# f.write("demo content from demo.py file 2 \n")
# f.write("demo content from demo.py file 3 \n")

# f.close()


with open("demo.txt", "a") as f:
    f.write("new added data ")


with open("demo.txt", "r") as f:
    # file_data = f.read()
    # file_data = f.readlines()[:2]
    file_data = f.readlines()
    print(file_data)