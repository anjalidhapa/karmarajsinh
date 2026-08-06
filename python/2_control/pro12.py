print('~~~SCHOLARSHIP ELIGIBILITY~~~')

marks=int(input('Enter your marks:'))
# sports = input("Do you play any sports:")
# sports= bool(sports)
sports = input("Do you play any sports (y / n) : ")

if (marks>=80 or sports == 'y'):
    print("you are eligible")
else : 
    print("you are not eligible")

