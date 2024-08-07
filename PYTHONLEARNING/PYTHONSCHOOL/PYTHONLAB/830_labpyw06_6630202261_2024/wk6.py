s = input("String : ")
dic ={word:s.count(word) for word in s}
print(dic)

for k , v in dic.items():
    print(k,v)
print(s)