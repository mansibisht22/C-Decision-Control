#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter values of three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b != c)
        printf("Scalene Triangle");

    else if (a == b || b == a || a == c)
        printf("Isosceles Triangle");

    else if (a == b == c || b == c == a || c == a == b)
        printf("Equilateral triangle");
}
