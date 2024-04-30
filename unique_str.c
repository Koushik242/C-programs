/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

int unique(char *str);

int main()
{
    char string[50];

    printf("Enter a string: ");
    scanf("%s", string);


    if (unique(string)) 
    {
        printf("It's a unique string\n");
    } 
    else
    {
        printf("It's not a unique string\n");
    }

    return 0;
}

int unique(char *str) 
{
    int length = strlen(str);

    for (int i = 0; i < length - 1; i++) 
    {
        for (int j = i + 1; j < length; j++) 
	{
            if (str[i] == str[j]) 
	    {
                return 0; 
            }
        }
    }

    return 1; 
}

