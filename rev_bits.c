/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int reverse_bits(int num)
{
    int rev = 0;
    for (int i = 0; i < 32; i++)
    {
        if (num & (1 << i))
        {
            rev =rev | (1 << (31 - i));
        }
    }
    return rev;
}

void print_binary(int num)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int reverse_num = reverse_bits(number);

    printf("Original number: %d in binary: ", number);
    print_binary(number);

    printf("Reversed bits: %d in binary: ", reverse_num);
    print_binary(reverse_num);


    return 0;
}

