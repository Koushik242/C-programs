/*
Name:Venkata Sai Kowshiknath Reddy Chemikela
Date:
Description:
Sample input:
Sample output:
*/

#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Calculate the average
    float average = sum / n;

    // Display the result
    printf("The average of the first %d natural numbers is: %.2f\n", n, average);

    return 0;
}

