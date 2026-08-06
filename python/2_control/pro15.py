print('~~~NUMBER TO WEEKDAY~~~')

# a=int(input("enter a number b/w (1-7):"))

# if (a>=1 and a<=7):
#     print("week day corusponding to number:")
#     if(a==1):
#         print("SUNDAY")
#     elif(a==2):
#         print("MONDAY")
#     elif(a==3):
#         print("TUESDAY")
#     elif(a==4):
#         print("WEDNESDAY")
#     elif(a==5):
#         print("THURSDAY")
#     elif(a==6):
#         print("FRIDAY")
#     else:
#         print("SATURDAY")
# else:
#     print("enter a valid number")

a=int(input("enter a number b/w (1-7):"))
match a:
    case 1:
        print("Monday ")
    case 2:
        print("Tuesday ")
    case 3:
        print("Wdnesday ")
    case _:
        print("Invalid day ")

