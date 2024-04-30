/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int recursiveArraySum(int arr[], int size, int index) 
{
    if (index == size) 
    {
        return 0;
    } 
    else
    {
        return arr[index] + recursiveArraySum(arr, size, index + 1);
    }
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int result = recursiveArraySum(array, size, 0);
    printf("Sum of array elements: %d\n", result);

    return 0;
}

