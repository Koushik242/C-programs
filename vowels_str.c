/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int countvowels(char *str)
{
    int count = 0;
    
    while (*str!= '\0') 
    {
        
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') 
	{
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    int str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int result = countvowels(str);

    printf("The number of vowels in the string %s : %d\n",str, result);

    return 0;
}

