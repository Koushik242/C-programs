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
    printf("Enter a number:");
    scanf("%d",&num);
    
    int count=0;
    while(num>0)
    {
	num=num & (num-1);
	count++;
    }
    printf("%d",count);



}

