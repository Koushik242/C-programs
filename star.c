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
    int num,x=0;
    printf("Enter number : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
	for(int j=1;j<=i;j++)
	{
	    x++;

	printf("%d ",x);
	}
	printf("\n");
    }



}

