global datalist 
def summation(num):
    global datalist
    data_number = [int(i) for i in num]
    summation = sum(data_number)
    
    datalist = []
    for i in data_number:
        total = 0 
        total += i
        datalist.append(total)
    
    return summation

num = input("Number : ")
if len(num) < 6:
    print("Your number is wrong")
else:
    summations = summation(num)
    
    
    
print(datalist)
print(summations)