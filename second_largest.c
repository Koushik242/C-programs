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
    int size, i;
    printf("Enter the number of elements\n");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d Elements\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Elements are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max = arr[0];
    int secondMax = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {		
            secondMax = max; 
            max = arr[i];     
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    printf("Second largest element in the array: %d\n", secondMax);

    return 0;
}

