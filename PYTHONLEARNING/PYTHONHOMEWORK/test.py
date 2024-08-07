calculate_data_list = lambda n: [sum([int(digit) for digit in n[:i+1]]) for i in range(len(n))]

last_data = lambda data_list: data_list[-1] if data_list else 0

n = input("Number: ")
if len(n) < 6:
    print("Your number is wrong")
else:
    data_list = calculate_data_list(n)
    
    total = last_data(data_list)
    
    print("data list:", data_list)
    print("Summation:", total)





    