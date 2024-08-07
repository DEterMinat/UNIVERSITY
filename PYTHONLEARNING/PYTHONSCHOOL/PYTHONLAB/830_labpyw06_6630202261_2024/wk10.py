value = []
item = [int(x) for x in input("Enter numbers: ").split(',')]
result = " ".join(str(x) for x in item if x %5 == 0)
print(" ".join(result))

