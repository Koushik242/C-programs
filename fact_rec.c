/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/


#include <stdio.h>

int factorial(int num) 
{
    if (num == 0 || num == 1) 
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main() 
{
    int n, res;

    printf("Enter the number: ");
    scanf("%d", &n);

    res = factorial(n);
    printf("Factorial of %d = %d\n", n, res);

    return 0;  
}

