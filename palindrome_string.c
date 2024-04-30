/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
	{
            return 0;
        }
    }

    return 1;
}

int main() 
 {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isPalindrome(inputString))
    {
        printf("%s is a palindrome.\n", inputString);
    } 
    else
    {
        printf("%s is not a palindrome.\n", inputString);
    }

    return 0;
}

