#include <stdio.h>

int main()
{
    char str[100], lower_str[100];
    int i = 0;
    
    printf("\n Enter the string : ");
    gets(str);// Input Text
    while (str[i] != '\0')// Str != ค่าว่าง
    {
       if(str[i] >= 'A' && str[i] <= 'Z'){//ถ้า str[i] มากกว่าเท่ากับ A และ str[i] น้อยกว่าเท่ากับ Z
        lower_str[i] = str[i] + 32;
       }
       else
       {
        lower_str[i] = str[i];
       }
       i++;
       
    }
    lower_str[i] = '\0';
    printf("\n The string converted into lower case is : ");
    puts(lower_str);
    return 0;
}