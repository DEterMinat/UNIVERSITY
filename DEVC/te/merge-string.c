#include <stdio.h>
#include <conio.h>

int main()
{
    char firstname[100], lastname[50];
    int i = 0, j = 0;
    
    

    printf("\n Enter the first name : ");
    gets(firstname);
    printf("\n Enter the lastname string : ");
    gets(lastname);

    // input your code here
    while(firstname[i] != '\0'){
        i++;
    }

    firstname[i] = ' ';
    i++;
    while(lastname[j] != '\0'){
        firstname[i] = lastname[j];
        i++;
        j++;
    }
    

    

    firstname[i] = '\0';

    printf("\n After appending, full name is : ");
    puts(firstname);
    getch();
    return 0;
}