#include <stdio.h>
int main()
{
    float hrd, cc, ts;

    printf("Enter value of hardness, carbon content & tensile strength: ");
    scanf("%f %f %f", &hrd, &cc, &ts);

    if (hrd > 50 && cc < 0.7 && ts > 5600)
        printf("GRADE 10 STEEL");

    else if (hrd > 50 && cc < 0.7 && ts < 5600)
        printf("GRADE 9 STEEL");

    else if (cc < 0.7 && ts > 5600)
        printf("GRADE 8 STEEL");

    else if (hrd > 0.5 && ts > 5600)
        printf("GRADE 7 STEEL");

    else if (hrd > 50 || cc < 0.7 || ts > 5600)
        printf("GRADE 6 STEEL");

    else
        printf("GRADE 6 STEEL");
}