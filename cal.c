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
    char operator;
    int num1, num2, result;

   
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

   
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(operator) 
    {
        case '+':
            result = num1 + num2;
            printf("Sum: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %d\n", result);
            break;
        case '/':
            if (num2 != 0)
	    {
                result = num1 / num2;
                printf("Quotient: %d\n", result);
            } 
	    else
	    {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

