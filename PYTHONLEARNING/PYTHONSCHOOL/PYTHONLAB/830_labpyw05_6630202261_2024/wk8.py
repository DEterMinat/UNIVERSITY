def even(x):
    return x%2==0

def squer(x):
    return x* x

lst=[i for i in range(1,11)]
even_number = list(map(squer,filter(even,lst)))
print(even_number)