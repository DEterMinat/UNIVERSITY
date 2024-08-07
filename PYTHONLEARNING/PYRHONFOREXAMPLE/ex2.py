table = [[5,2,6],[4,6,0],[9,1,8],[7,3,8]]
sum1 = 0
sum2 = 0
sum3 = 0
for i in range(len(table)):
    for j in range(len(table[i])):
        if(j==0):
            sum1 += table[i][j]
        if(j==1):
            sum2 += table[i][j]
        if(j==2):
            sum3 += table[i][j]
print(sum1," ",sum2," ",sum3)