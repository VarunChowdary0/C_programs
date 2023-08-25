/*Write a C program to find
the LCM and GCD of two
integers.
*/

#include<stdio.h>

int GCD(int a,int b)
{
    if(b==0)
        return 0;
    return b,a%b;
}

int LCM (int a,int b)
{
    return (a*b)/GCD(a,b);
}

int main(void)
{
    int a,b;
    printf("Enter a, b: ");
    scanf("%d%d",&a,&b);
    printf("GCD : %d",GCD(a,b));
    printf("\nLCM : %d",LCM(a,b));
}