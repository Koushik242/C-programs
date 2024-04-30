/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

void sum_product(int a, int b, int *sum, int *product) 
{
    *sum = a + b;
    *product = a * b;
}

int main()
{
    int num1, num2, result_sum, result_product;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);


    sum_product(num1, num2, &result_sum, &result_product);
    printf("Sum: %d\n", result_sum);
    printf("Product: %d\n", result_product);

    return 0;
}

