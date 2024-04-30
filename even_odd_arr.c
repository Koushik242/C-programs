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

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int evenArray[n], oddArray[n];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0)
       	{
            evenArray[evenCount++] = arr[i];
        } 
	else 
	{
            oddArray[oddCount++] = arr[i];
        }
    }

    
    printf("Even numbers in the array: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    
    printf("Odd numbers in the array: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}

