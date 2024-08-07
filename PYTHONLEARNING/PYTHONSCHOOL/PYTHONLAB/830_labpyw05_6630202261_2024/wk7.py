lst=[i for i in range(11)]
even_number = list(map(lambda x : x**2,filter(lambda x: x%2==0,lst)))
print(even_number)