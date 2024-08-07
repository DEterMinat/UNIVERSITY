def count_martix_elements(martix):
    count = 0
    for row in martix:
        for element in row:
            count += 1
    return count

table = [[5,2,6],[4,6,0],[9,1,8],[7,3,8]]
count = count_martix_elements(table)
print("Number : ",count)