/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int read();
int print(int value);
double avg(int a, int b);
void sort(int array[], int size);
void reverse(char str[]);
int square(int num);
void copy(char dest[], const char src[]);

int main()
{
    int num = read();
    printf("You entered: %d\n", num);

    double average = avg(10, 20);
    printf("Average: %lf\n", average);

    int numbers[] = {4, 1, 7, 2, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, size);

    char str[] = "Hello";
    reverse(str);
    printf("Reversed String: %s\n", str);

    int squared = square(8);
    printf("Square: %d\n", squared);

    char source[] = "Koushik";
    char destination[20];
    copy(destination, source);
    printf("Copied String: %s\n", destination);

    return 0;
}

int read()
{
    int value;
    printf("Enter a number: ");
    scanf("%d", &value);
    return value;
}

int print(int value)
{
    printf("Value: %d\n", value);
}

double avg(int a, int b)
{
    return (a + b) / 2.0;
}

void sort(int array[], int size)
{
   
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
               
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void reverse(char str[])
{
   
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int square(int num)
{
    return num * num;
}

void copy(char dest[], const char src[])
{
    
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

