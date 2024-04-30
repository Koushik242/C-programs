/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/
#include <stdio.h>
#include <string.h>

void count_characters(char *input_string)
{
    int char_count[100] ;
    int n = strlen(input_string);

    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        if (input_string[i] != '\0') 
	{
            for (int j = i + 1; j < n; j++) 
	    {
                if (input_string[i] == input_string[j])
	       	{
                    count++;
                    input_string[j] = '\0';
                }
            }
            printf(" %c = %d \n", input_string[i], count);
        }
    }
}

int main()
{
    char input_string[100];

    printf("Enter a string: ");
    scanf("%s", input_string);

    count_characters(input_string);

    return 0;
}

