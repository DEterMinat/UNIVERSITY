# n = [3, 41, 12, 9, 74, 15]

# max = n[0]
# for number in n:
#     if number > max:
#         max = number

# print(max)

max = -1
print('Before',max)
for num in [9,41,12,3,74,15]:
    if num > max:
        max = num
    print(max , num)

print('After', max)
