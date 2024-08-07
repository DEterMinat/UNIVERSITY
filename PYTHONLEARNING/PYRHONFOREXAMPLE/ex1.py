# start = -75 
# while (True):
#     if (start % 3 == 0 and ((start >= -75 and start <= -25) or (start >=50 and start <= 75))):
#         print(start)
#     start += 1
#     if(start > 75):
#         break
    
table = [[5,2,6],[4,6,0],[9,1,8],[7,3,8]]

rez = [[table[j][i]] for j in range(len(table)) for i in range(len(table[0]))]

for row in rez:
    for col in row:
        print(col, end=" ")
    print("")