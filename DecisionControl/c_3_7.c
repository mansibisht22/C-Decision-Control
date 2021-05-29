//Program to find out whether triangle is valid

#include <stdio.h>
int main()
{
    int ang1, ang2, ang3;

    printf("Enter the value of three angles: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

    if (ang1 + ang2 + ang3 == 180)
        printf("TRIANGLE IS VALID!");

    else
        printf("Triangle is not valid :/");
}