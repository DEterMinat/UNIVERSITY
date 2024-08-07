# vec = [2,4,6]
# print([3 * x for x in vec])


lst=[i for i in range(11)]
lst_square = list(map(lambda x: x*x, lst))
print(lst_square)

lst=[i for i in range(11)]
even_number = list(map(lambda x : x**2,filter(lambda x: x%2==0,lst)))
print(even_number)
