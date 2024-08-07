# ให้เขียนโปรแกรม Summation ให้รับค่าตัวเลขจ านวนเต็มเข้ามาโดยการป้อนข้อมูลจากผู ้ใช้งาน โดยจ านวนตัว
#  เลขที ่ใส่ต้องไม่ต ่ากว่า 6 หลัก 
# โดยโจทย์ดังนี ้ ตัวอย่างเช่น if n = 457893 เราต้องมีการบวก 4 + 5 + 7+ 8 + 9 + 3 = 36 พร้อมทั ้งสร้าง data list 
# ผลรวมทีละตัว เช่น [9, 16, 24, 33, 36] ให้เป็นตัวแปร Global ที ่มีการแก้ไขใน Function

# Section 3: Function using lambda. 


#สำหรับ section 3 ยากมากครับกว่าจะให้คำตอบตรงกับ 2 ข้อแรก ข้อนี้ยากมาก ๆ ครับ
calculate_data_list = lambda n: [sum(
    [
        int(digit) for digit in n[:i+1]
    ]
    ) for i in range(len(n))
                                ]


last_element = lambda data_list: data_list[-1] if data_list else 0
# print(last_element)

n = input("Number : ")


if len(n) < 6:
    print("Your Number is not correct")
else:
    
    data_list = calculate_data_list(n)
    
    
    total = last_element(data_list)

    
    print("data list:", data_list)
    print("Summation:", total)



