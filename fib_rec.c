/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int fibonacci_recursive(int n) 
{
    if (n <= 1) 
    {
        return n;
    } 
    else
    {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() 
{
    int n_terms;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n_terms);

    printf("Fibonacci Sequence:\n");
    for (int i = 0; i < n_terms; i++) 
    {
        printf("%d ", fibonacci_recursive(i));
    }

    return 0;
}

