//Program to find out who is the youngest of the three brothers

#include <stdio.h>
int main()
{
    int ram, shyam, ajay;

    printf("Enter Age of Ram, Shyam, Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay)
        printf("RAM IS THE YOUNGUEST");

    else if (shyam < ram && shyam < ajay)
        printf("SHYAM IS THE YOUNGUEST");

    else if (ajay < shyam && ajay < ram)
        printf("AJAY IS THE YOUNGUEST");
}