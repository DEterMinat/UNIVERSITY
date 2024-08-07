num = input("number : ")

if len(num) < 6:
    print("Your number is wrong")
else:
    data_number = [int(i) for i in num]
    summation = sum(data_number)
    
    data_list = []
    for j in data_number:
        total = 0
        total += j
        data_list.append(total)
        
    print(data_list)
    print(summation)