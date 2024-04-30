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
    printf("Enter n value");

    scanf("%d",&num);

    for (int i=0;i<num;i++)
    {
	printf("%d  ", 1<<i);
    }



}

