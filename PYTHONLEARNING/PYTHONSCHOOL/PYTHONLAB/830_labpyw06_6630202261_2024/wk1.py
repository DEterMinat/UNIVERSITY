x = int(input("Enter Number: "))

if(x % 3 == 0 and ((x >= -75 and x <= -25) or (x >=50 and x<=75))):
    print("True")
else:
    print("False")