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
    int num,isPrime=0;
    printf("Enter a number");
    scanf("%d",&num);

    for(int i=2;i*i<=num;i++)
    {
	if(num%i==0)
	{
	    isPrime=1;
	    break;
	}
    }
    if(isPrime==0)
    {
	printf("Entered number is prime");
    }
    else
    {
	printf("Not a Prime");
    }


    



}

