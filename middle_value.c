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
    int n;

    printf("Enter the Size: ");
    scanf("%d", &n);

    int values[n];

    printf("Enter %d Values:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < n - 1 ; i++) 
    {
        for (int j = 0; j < n-i-1; j++) 
	{
            if (values[j] > values[j + 1]) 
	    {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    int middleIndex = n / 2;
    int middleValue = values[middleIndex];

    printf("The middle number is: %d\n", middleValue);

    return 0;
}


