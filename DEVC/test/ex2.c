// โจทย์ที่ 2: การค้นหาค่าสูงสุดและต่ำสุดใน Array
// เขียนโปรแกรมในภาษา C เพื่อค้นหาค่าสูงสุดและต่ำสุดใน Array ขนาด N โดยที่ N ถูกกำหนดโดยผู้ใช้

#include <stdio.h>

int main(){
    int n;
    printf("Enter your size array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter your number : \n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    int MAX = arr[0];
    int MIN = arr[0];


    for(int i = 1 ; i < n ; i++){
        if(arr[i] > MAX){
            MAX = arr[i];
        }
        if(arr[i] < MIN){
            MIN = arr[i];
        }
    }

    printf("Max number : %d\n",MAX);
    printf("Min number : %d\n",MIN);
    return 0;
}