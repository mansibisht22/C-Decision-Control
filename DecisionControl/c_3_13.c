//Program to find out if a worker is efficient

#include <stdio.h>
int main()
{
    int hours;

    printf("Enter working hours: ");
    scanf("%d", &hours);

    if (hours >= 2 && hours <= 3)
        printf("highly efficient");

    else if (hours >= 3 && hours <= 4)
        printf("improve speed");

    else if (hours >= 4 && hours <= 5)
        printf("take training again.");

    else
        printf("terminated.");

    return 0;
}