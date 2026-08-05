print('~~~STUDENT GRADING SYSTEM~~~')

marks=int(input('Enter your marks (out of 100) :'))

if (marks<33) :
    print('You have failed')
elif(marks>=33 and marks<=100) :
    if(marks<50) :
        print('Your grade is C')
    elif(marks>=50 and marks <=70):
        print('Your grade is B')
    else:
        print('Your grade is A')
else:
    print('Enter valid marks')