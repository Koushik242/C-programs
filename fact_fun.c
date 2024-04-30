/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int fact(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
	f=f*i;
    }
    return f;
}
	
int main()
{
    int num;
    printf("Enter a number :");

    scanf("%d",&num);

    printf("%d",fact(num));



}

