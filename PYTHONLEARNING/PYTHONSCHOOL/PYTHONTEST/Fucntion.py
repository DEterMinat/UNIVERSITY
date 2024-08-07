# x = 99
# def func(Y):
#     z= x + Y
#     return(z)

# z = func(10)
# print(z)


# def word(text):
#     print(text)
    
# word("Hellow")


# def my_fucn():
#     x=20
#     print(x)
# my_fucn()

# def f():
#     s +='Helloworld'
#     print(s)

# s ="yes"
# f()

# total = 0
#     total = arg1 + arg2
#     return total

# sum = sum(10,20)
# print(sum)


# def fucntion(s,num,d):
    
#     print(s,num,d)
    
# fucntion("Hello",10,(1,23,4))
    
    
def changeme(mylist):
    mylist = [1,2,3,4] #local
    print(mylist)
    
mylist = [10,20,30]
changeme(mylist) #global
print(mylist)