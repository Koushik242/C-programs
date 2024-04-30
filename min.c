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
    int size,i;
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

    int min = arr[0]; 

    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum element in the array: %d\n", min);

    return 0;
}

