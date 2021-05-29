//Program to find out if the number is odd or even
#include <stdio.h>
int main()
{
    int num;

    printf("ENTER ANY NUMBER: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even Number!");

    else
        printf("Odd Number!");
}