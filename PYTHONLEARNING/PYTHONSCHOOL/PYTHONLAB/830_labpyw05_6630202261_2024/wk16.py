total = 0
def sum(a1,a2):
    total = a1 + a2
    print(f"inside in fucntion loacl total {total}")
    return total

sum(10,20)
print(f'outside total {total}')