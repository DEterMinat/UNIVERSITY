min = float('inf')  
print('Befoce', min)
for num in [9, 41, 12, 3, 74, 15]:
    if num < min:
        min = num
    print(min, num)

print('After', min)
