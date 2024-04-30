/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter the string");
    scanf("%[^\n]",str);
    printf("String = %s\n" , str);
    int len;
    len=strlen(str);
    printf("String contains %d characters\n",len);



}

