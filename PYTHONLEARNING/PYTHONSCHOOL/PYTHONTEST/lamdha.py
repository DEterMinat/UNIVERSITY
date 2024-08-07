# add = lambda x,y,z: x*y+z
# print(add(2,3,4))

# เรียงลำดับรายการของทูเพิลตามองค์ประกอบที่สอง
# points = [(1, 2), (5, 0), (7, 0), (3, 1)]
# points_sorted = sorted(points, key=lambda point: point[1])
# print(points_sorted)  

# # ใช้ lambda กับฟังก์ชัน map เพื่อยกกำลังสองแต่ละตัวเลขในรายการ
# numbers = [1, 2, 3, 4]
# squared = list(map(lambda x: x ** 2, numbers))
# print(squared)  # Output: [1, 4, 9, 16]

# double = lambda x : x * 2
# print(double(5))


# def get_fucn(n):
#     return lambda x : x * n + x % n
# my_fucn = get_fucn(13)
# print(my_fucn(4))

nums = [0,4,7,2,1,0,9,3,5,6,8,0,3]
# nums = list(map(lambda x:x % 5 ,nums))
print(nums)

def even(x):
    if(x %2 == 0):
        return "even"
    else:
        return "odd"
    
list(map(even,nums))
print(list(map(even,nums)))