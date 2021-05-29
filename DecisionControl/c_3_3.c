//Program to find out whether it is a leap year

#include <stdio.h>
int main()
{
    int year;

    printf("Enter value of year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("IT IS A LEAP YEAR");

    else
        printf("It is NOT a leap year");
}