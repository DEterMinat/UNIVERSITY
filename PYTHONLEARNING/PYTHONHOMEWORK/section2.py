# ให้เขียนโปรแกรม Summation ให้รับค่าตัวเลขจ านวนเต็มเข้ามาโดยการป้อนข้อมูลจากผู ้ใช้งาน โดยจ านวนตัว
#  เลขที ่ใส่ต้องไม่ต ่ากว่า 6 หลัก 
# โดยโจทย์ดังนี ้ ตัวอย่างเช่น if n = 457893 เราต้องมีการบวก 4 + 5 + 7+ 8 + 9 + 3 = 36 พร้อมทั ้งสร้าง data list 
# ผลรวมทีละตัว เช่น [9, 16, 24, 33, 36] ให้เป็นตัวแปร Global ที ่มีการแก้ไขใน Function

# Section 2: ต้องเขียน function แบบ user defined และให้มี Global, Local variables

data_list = [] #global

def summation(num):
    global data_list #local -> global
    
    
    
    data_number = [int(i) for i in num]
    
    summation = sum(data_number) #local
    
    data_list = [] #global
    total = 0
    for i in data_number:
        total += i
        data_list.append(total)
        
    return summation #local
    
num = input("Number : ")

if len(num) < 6:
    print("Your Number is not correct")
else:
    summations = summation(num)
    
    
    
print(f"Data List : {data_list}")
print(f"Summation : {summations}")