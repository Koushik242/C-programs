/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
int sum_of_digits(int num)
{
    if(num==0)
    {
	return 0;
    }
    else
    {
	return (num%10) + sum_of_digits(num/10);
    }
}    
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int res=sum_of_digits(num);

    printf("Sum of digits %d  ",res);



}

