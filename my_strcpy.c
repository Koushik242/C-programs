/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char src[50];
    char dest[50];

    printf("Enter the string: ");
    scanf("%[^\n]", src);

    printf("String = %s\n", src);

    my_strcpy(dest, src);

    printf("Dest : %s\n", dest);

    return 0;
}

