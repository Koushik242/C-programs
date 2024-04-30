/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

void sum_product(int a, int *square, int *cube)
{
    *square = a * a;
    *cube = a * a * a;
}

int main()
{
    int num, result_square, result_cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum_product(num, &result_square, &result_cube);

    printf("Square: %d\n", result_square);
    printf("Cube: %d\n", result_cube);

    return 0;
}

