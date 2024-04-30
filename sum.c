/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

// Function to add two numbers
int addNumbers(int num1, int num2) 
{
    int result = num1 + num2;
    return result;
}

int main()
{
    // Read two numbers from the user
    int firstDigit, secondDigit;

    printf("Enter the first digit: ");
    scanf("%d", &firstDigit);

    printf("Enter the second digit: ");
    scanf("%d", &secondDigit);

    // Call the function and store the result
    int sumResult = addNumbers(firstDigit, secondDigit);

    // Display the result
    printf("The sum of %d and %d is: %d\n", firstDigit, secondDigit, sumResult);

    return 0;
}

