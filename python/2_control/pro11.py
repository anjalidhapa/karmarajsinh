print("~~~SGIN UP~~~")

user=input('ENTER YOUR USERNAME:')
password=input('ENTER YOUR PASSWORD:')
conpassword=input('CONFIRM YOUR PASSWORD:')

if(password==conpassword):
    print('account created succesfuly')
else:
    print('Password invalid')
