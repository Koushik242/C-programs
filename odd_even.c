/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int odd_even(int num)
{
    if(num%2==0)
    {
	return 1;
    }
    else
    {
	return 0;
    }
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);

    printf("%d",odd_even( num));

}

