/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

void printCharsRecursive(char *str) 
{
    if (*str == '\0') 
    {
        return;
    }

    printf("%c ", *str);

    printCharsRecursive(str + 1);
}

int main() 
{
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Characters of the string: ");
    printCharsRecursive(inputString);

    return 0;
}

