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

// Find the end of the first name
    while (firstname[i] != '\0') 
    {
        i++;
    }

    // Add a space between first name and last name
    firstname[i] = ' ';
    i++;

    // Append the last name to the first name
    while (lastname[j] != '\0') 
    {
        firstname[i] = lastname[j];
        i++;
        j++;
    }

    // Null-terminate the full name string
    firstname[i] = '\0';

    printf("\nAfter appending, full name is: ");
    puts(firstname);

    getch();
    return 0;
}