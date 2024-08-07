sum = 0
count = 0
print('before',count , sum)
for value in [9,41,3,74,15]:
    # sum = 0
    count += 1
    sum = sum + value
    print(count, sum ,value)
print('After', count ,sum, sum/count)
print(sum/count)