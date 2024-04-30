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
    int num;
    printf("Enter the number:");

    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
	if(num>>i & 1)
	{
	    printf("1");
	}
	else
	{
	    printf("0");
	}
    }



}

