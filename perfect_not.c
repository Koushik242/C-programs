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
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(int i=1;i<=num/2;i++)
    {
	if(num%i==0)
	{
	    sum=sum+i;
	}
    }
    if(sum==num)
    {
	printf("Perfect");
    }
    else
    {
	printf("Not a Perfect");
    }

}

