#include <stdio.h>
int main()
{
    int days;
    float fine;

    printf("Enter no. of days book return is late by:");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = 0.5 * days;
        printf("%f", fine);
    }

    else if (days >= 6 && days <= 10)
    {
        fine = 1 * days;
        printf("%f", fine);
    }

    else if (days > 10)
    {
        fine = 5 * days;
        printf("%f", fine);
        if (days >= 30)
        {
            fine = 5 * days;
            printf("MEMBERSHIP CANCELLED AND FINE IS %f", fine);
        }
    }
}