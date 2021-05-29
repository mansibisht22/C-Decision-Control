// Determining whether a seller made profit or loss

#include <stdio.h>
int main()
{
    int cp, sp, prof, loss;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d\n", &cp, &sp);

    prof = sp - cp;
    loss = cp - sp;

    if (sp > cp)
        printf("PROFIT of %d", prof);

    else if (sp < cp)
        printf("LOSS of %d", loss);

    else
        printf("NO LOSS OR PROFIT");

    return 0;
    
}