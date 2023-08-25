/*
If cost price and selling
price of an item S input
through the keyboard, write
a program to determine
whether the seller has made
profit or incurred loss.
Write a C program to
determine how much profit
or loss incurred in
percentage.
*/

#include <stdio.h>

int main(void)
{
    int cp, sp, dif;
    float tmp, pres;
    
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);
    
    tmp = cp * 0.01;
    
    if (cp < sp)
    {
        printf("Profit\t");
        dif = sp - cp;
        pres = dif * tmp;
        printf("Gain of %g%%", pres);
    }
    else if (cp > sp)
    {
        printf("Loss\t");
        dif = cp - sp;
        pres = dif * tmp;
        printf("Loss of %g%%", pres);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
