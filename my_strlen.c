/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

int my_strlen(const char *str) 
{
    int length = 0;

    while (*str != '\0') 
    {
        length++;
        str++;
    }

    return length;
}

int main() 
{
    char str[50];

    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("String = %s\n", str);

    int len;
    len = my_strlen(str);
    printf("String contains %d characters\n", len);

    return 0;
}

