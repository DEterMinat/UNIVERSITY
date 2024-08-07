def Fahrenheit2Celsius(f):
    return (f - 32)*5 / 9


for i in range(131):
    C =Fahrenheit2Celsius(i)
    if(C > 0):
        print(i,C)
    else:
        print(i,C)