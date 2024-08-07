students = ['bernice','aaron','cody']
a = len(students)
print(a)

b=0

while b < a:
    print(students[b])
    b=b+1
    
print('\n')


for x in range(a):
    print(students[x])
    
    
b = len(students) - 1

print('While - Reverse')

while 0 <= b < a:
    print(students[b])
    b -= 1
    
