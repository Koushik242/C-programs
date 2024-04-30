/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
void my_strcat(char *dest,char *src)
{
    while(*dest !='\0')
    {
	dest++;
    }
    while(*src != '\0')
    {
	*dest++=*src++;
    }
    *dest='\0';
}

int main()
{
    char destination[100];
    char source[50];

    printf("Enter the destination string: ");
    scanf("%s", destination);

    printf("Enter the source string: ");
    scanf("%s", source);

    my_strcat(destination, source);

    printf("Concatenated String: %s\n", destination);

    return 0;
}

