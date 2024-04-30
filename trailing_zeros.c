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
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while ((num & 1) == 0) 
    {
        num = num >> 1;
        count++;
    }

    printf("Trailing 0's count: %d\n", count);

    return 0;
}

