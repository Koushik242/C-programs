/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

// Function to swap characters at two positions in a string
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to reverse a string
void reverseStringRecursive(char *str, int start, int end)
{
    if (start >= end)
    {
        return; // Base case: if the string has one or zero characters, it's already reversed
    }

    // Swap the characters at positions start and end
    swap(&str[start], &str[end]);

    // Recursive call for the substring between start + 1 and end - 1
    reverseStringRecursive(str, start + 1, end - 1);
}

int main() 
{
    char inputString[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = strlen(inputString);

    // Reverse the string using recursion
    reverseStringRecursive(inputString, 0, length - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}

