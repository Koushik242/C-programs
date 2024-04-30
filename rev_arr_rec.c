/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int reverseArray(int arr[], int start, int end) 
{
    if (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        return reverseArray(arr, start + 1, end - 1);
    }
}

int main() 
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    reverseArray(array, 0, size - 1);

    printf("Reversed array:");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

