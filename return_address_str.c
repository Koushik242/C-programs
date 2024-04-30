/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

char *getString()
{
    static char str[] = "Hello, World!";
    return str;
}

int main()
{
    char *stringAddress = getString();

    printf("String: %s\n", stringAddress);

    printf("Character: %c\n", *stringAddress);

    return 0;
}

