/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
#include <string.h>

void my_strrev(char *str);

int main()
{
    char myString[100];

    printf("Enter a string: ");
    scanf("%s", myString);

    my_strrev(myString);

    printf("Reversed String: %s\n", myString);

    return 0;
}

void my_strrev(char *str) 
{
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
      
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

