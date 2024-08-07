numlist= []
print("Enter total number of element:\t")
n = int(input())
sum = 0
sumeven = 0
sumodd = 0

for i in range(1,n+1):
    print("enter element:")
    element = int(input())
    numlist.append(element)
    sum += element
     
evenlist = []
Oddlist = []

for j in numlist:
    if j % 2 == 0:
        sumeven += j
        evenlist.append(j)
    else:
        sumodd += j
        Oddlist.append(j)
        
avg = sum / n
print("Even numbers list \t",evenlist)
print("Odd numbers list \t",Oddlist)
print(f'Sum :{sum}')
print(f'Sumeven :{sumeven}')
print(f'Sumodd : {sumodd}')
print(f'Average : {avg}')