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
    int first_day, day_of_year;

    printf("Enter the 1st day of the year (0-6): ");
    scanf("%d", &first_day);

    printf("Enter the day of the year (1-365): ");
    scanf("%d", &day_of_year);

    if (first_day < 0 || first_day > 6 || day_of_year < 1 || day_of_year > 365)
    {
        printf("Invalid input.\n");
        return 1;
    }


   
    int current_day = (day_of_year + first_day - 1) % 7;

    switch (current_day) 
    {
        case 0:
            printf("Day %d is a Saturday.\n", day_of_year);
            break;
        case 1:
            printf("Day %d is a Sunday.\n", day_of_year);
            break;
        case 2:
            printf("Day %d is a Monday.\n", day_of_year);
            break;
        case 3:
            printf("Day %d is a Tuesday.\n", day_of_year);
            break;
        case 4:
            printf("Day %d is a Wednesday.\n", day_of_year);
            break;
        case 5:
            printf("Day %d is a Thursday.\n", day_of_year);
            break;
        case 6:
            printf("Day %d is a Friday.\n", day_of_year);
            break;
        default:
            printf("Error in calculating the day of the week.\n");
            
    }

    return 0;
}

