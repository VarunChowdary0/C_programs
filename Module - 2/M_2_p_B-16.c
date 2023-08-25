/*
Write a C program to print
the following series 1/1! +
2/2! + 3/3! +
. . . . . . . . . . . . . . .
*/
#include<stdio.h>

int fact(int n)
{
    int i=1,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main(void)
{
    int i,x;
    printf("Enter N: ");
    scanf("%d",&x);
    float val=0,inf;
    for(i=1;i<=x;i++)
    {
        inf = (float)i/fact(i);
        val+=inf;
    }
    printf("Value: %g",val);
}