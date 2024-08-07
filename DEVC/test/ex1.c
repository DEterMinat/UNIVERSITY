// โจทย์ที่ 1: การหาค่าเฉลี่ยของ Array
// เขียนโปรแกรมในภาษา C เพื่อหาค่าเฉลี่ยของตัวเลขใน Array ขนาด N โดยที่ N ถูกกำหนดโดยผู้ใช้

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Element:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);

    }

    float sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += arr[i];
    }

    float arg = sum / n;
    printf("Summation : %.0f \n",sum);
    printf("Average : %.2f",arg);
    return 0;
}



