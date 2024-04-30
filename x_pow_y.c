/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int x_pow_y(int x, int y)
{
    if (x == 0 || y == 0)
    {
        return 1;
    }
    else 
    {
     
        return x * x_pow_y(x, y - 1);
    }
}

int main() 
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("x power of y is %d\n", x_pow_y(x, y));

    return 0;
}

