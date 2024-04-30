/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

void merge_add(int arr1[], int arr2[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    
    merge_add(arr1, arr2, size);

    printf("Merged and Added Array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}

