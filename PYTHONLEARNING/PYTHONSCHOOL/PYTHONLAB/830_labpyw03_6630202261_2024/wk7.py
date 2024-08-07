dogs = ['border collie','australian cattle dog','labrador retriever']

print("Result for the dog show are as followes:\n")
for i , dog in enumerate(dogs):
    place = str(i)
    print(f"place: {place}  Dogs: {dog.title()}")
    print(f"place: {place}  Dogs: {dogs[i]}")