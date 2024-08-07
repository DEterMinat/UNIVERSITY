colors = ['red',
         'orange',
         'yellow',
         'green',
         'blue',
         'indigo',
         'violet']

d = dict()
for i in colors:
    key = len(i)
    print(key)
    if key not in d:
        d[key] = []
    d[key].append(i)
print(f"d: {d}")