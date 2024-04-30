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
    char *daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int firstDayOfYear, dayOfYear;

    printf("Enter the first day of the year ");
    scanf("%d", &firstDayOfYear);

    printf("Enter the day of the year (1-365): ");
    scanf("%d", &dayOfYear);

    if (firstDayOfYear < 1 || firstDayOfYear > 7 || dayOfYear < 1 || dayOfYear > 365) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    int currentDayOfWeek = (firstDayOfYear + (dayOfYear - 1)) % 7;

    printf("Day %d of the year falls on a %s.\n", dayOfYear, daysOfWeek[currentDayOfWeek]);

    return 0;
}

