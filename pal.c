/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int reverse(int num) 
{
    int rev = 0;
    while (num > 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int palindrome(int num)
{
    return num == reverse(num);
}

int validation(int num) 
{
    if (num>100 && num<100000)
        return 1; 
    else 
	return 0;
}

int main() 
{
    int num;

    
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } 
    while (!validation(num));

    if (palindrome(num))
    {
        printf("%d is a palindrome.\n", num);
    } else
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

