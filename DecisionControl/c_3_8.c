//Program to find absolute value

#include<stdio.h>
#include<math.h>
int main() {
    int num;

    printf("Enter no. to find absolute value: ");
    scanf("%d", &num);

    if(num>=0)
    printf("Absolute value of number is: %d", num);

    else if(num<0) {
        num = abs(num);
        printf("Absolute value of number is: %d", num);
    }
}
