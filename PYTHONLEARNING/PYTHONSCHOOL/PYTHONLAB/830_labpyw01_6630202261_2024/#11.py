#11. Leap Year with Function
def CheckLeapYear(QYear):
    if ((QYear % 400 == 0) or (QYear %100 != 0) and (QYear%4 == 0)):
        print("This is a leap year")
    else: 
        print("This is not a leap year")

QYear = int(input("Enter the number year: "))
CheckLeapYear(QYear)