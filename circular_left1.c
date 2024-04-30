/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int circular_left(int num, int n)
{
    return (num << n) | ((unsigned int)num >> (32 - n));
}

void print_bits(int ret) 
{
    for (int i = 31; i >= 0; i--) 
    {
        printf("%d ", (ret & (1 << i)) ? 1 : 0);
    }
    printf("\n");
}

int main() 
{
    int num, n, ret;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter n: ");
    scanf("%d", &n);

    ret = circular_left(num, n);

    printf("Result in Binary: ");
    print_bits(ret);

    return 0;
}

