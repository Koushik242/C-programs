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
    int num,count=0;
    printf("Enter numbers");
    scanf("%d",&num);
    unsigned int mask = 1 << 31;
    while((mask & num) == 0)
    {
	mask = mask>>1;
	count++;
    }
    printf("Leading 0's count :%d",count);




}

