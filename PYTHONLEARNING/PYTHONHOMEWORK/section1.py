# ให้เขียนโปรแกรม Summation ให้รับค่าตัวเลขจ านวนเต็มเข้ามาโดยการป้อนข้อมูลจากผู ้ใช้งาน โดยจ านวนตัว
#  เลขที ่ใส่ต้องไม่ต ่ากว่า 6 หลัก 
# โดยโจทย์ดังนี ้ ตัวอย่างเช่น if n = 457893 เราต้องมีการบวก 4 + 5 + 7+ 8 + 9 + 3 = 36 พร้อมทั ้งสร้าง data list 
# ผลรวมทีละตัว เช่น [9, 16, 24, 33, 36] ให้เป็นตัวแปร Global ที ่มีการแก้ไขใน Function - 

# Section 1: ไม่ต้องเขียน function 

num = input("Number : ") #456789

if len(num) < 6: #ถ้าจำนวนน้อยกว่า 6 ให้ทำงานอันนี้
    print("Your Number is not correct")
else:
    data_number = [int(i) for i in num] #วนลูปจำนวนของตัวเลขเก็บไว้ในdata_number
    # print(data_number)
    summation = sum(data_number) #หาผลรวมของ data_number
    
    data_list = [] #สร้าง data list เก็บไว้
    total = 0
    for i in data_number: #ลูปเพื่อ
        total += i
        data_list.append(total)
        # print(data_list)
        # print(total)
        
    print(f"Data List : {data_list}")
    print(f"Summation : {summation}")
        
        
    