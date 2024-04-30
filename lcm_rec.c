/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int lcm(int a, int b, int i)
{
    if ((a * i) % b == 0)
    {
        return a * i;
    }
    else
    {
        return lcm(a, b, i + 1);
    }
}

int main() 
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = lcm(num1, num2, 1);

    printf("LCM of %d and %d is: %d\n", num1, num2, result);
    

    return 0;
}

