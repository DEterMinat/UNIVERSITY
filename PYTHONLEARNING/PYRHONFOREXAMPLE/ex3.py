table = [[5,2,6],[4,6,0],[9,1,8],[7,3,8]]
count = 0

for row in table:
    for col in row:
        if (col % 2 != 0):
            count += 1
print(count)