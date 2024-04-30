/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize=2;
    static int result[2];
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] + nums[j] == target)
            {

                result[0]=i;

                result[1]=j;

		return result;

		
            }
        }

    }

}
int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");

    int nums[20];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target value: ");
    scanf("%d", &target);

    int returnSize;
    int* result = twoSum(nums, size, target, &returnSize);

    if (result != NULL)
    {
        printf("Indices: %d, %d\n", result[0], result[1]);
    }
    else
    {
        printf("No solution");
    }

}

