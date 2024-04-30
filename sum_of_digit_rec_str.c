/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>
int sumOfDigitsRecursive(char *str) 
{
    
    if (*str == '\0')
    {
        return 0;
    }

    int digit = *str - '0';

    return digit + sumOfDigitsRecursive(str + 1);
}

int main() 
{
    char str[10];

    printf("Enter a number as a string: ");
    scanf("%s", str);

    int result = sumOfDigitsRecursive(str);
    printf("The sum of digits is: %d\n", result);

    return 0;
}

