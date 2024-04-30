/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>
int swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}
    
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Before n1 =%d,n2=%d\n",a,b);

    swap(&a,&b);
    printf("After n1=%d,n2=%d\n",a,b);



}

