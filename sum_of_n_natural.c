/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/


#include <stdio.h>

int sumofn_natural(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num + sumofn_natural(num - 1);
    }
}

int main()
{
    int n, res;

    printf("Enter the number: ");
    scanf("%d", &n);

    res = sumofn_natural(n);
    printf("Sum of n natural numbers of %d = %d\n", n, res);

    return 0;
}
