print('~~~VOTING AND LICENCE ELIGIBILITY~~~')

age=int(input('Enter your age:'))
nation=input("enter your nationality:").lower()

if (age>=18):
    if (nation=="indian"):
        print("you are eligibale for voting and driving licence")
    else :
        print('you are eligibale for driving licence')
else :
    print('you are not of legal age')