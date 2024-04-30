/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 32 && ch <= 126) 
    {
        printf("The entered character is a printable character.\n");
    } 
    else 
    {
        printf("The entered character is a non printable character.\n");
    }

    return 0;
}

