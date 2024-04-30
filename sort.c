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
    int size;
    printf("Enter the number of elements\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d Elements\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array Elements are :\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection sort
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
	{
            if (arr[i] > arr[j]) 
	    {
                // Swap elements if they are in the wrong order
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array Elements in ascending order are :\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

