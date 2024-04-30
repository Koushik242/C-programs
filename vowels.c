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
    char character;

    printf("Enter character");

    scanf("%c",&character);

    switch(character)
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	    printf("Entered character is vowel");
	    break;
	default:
	    printf("Not vowel");
    }




}

