/*
Write a C program that uses
functions to convert binary
number to decimalnumber
*/
#include<stdio.h>

int binaryToDecimal(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return ( n%10 + 2 * binaryToDecimal(n/10) );
    }
}
int main(void)
{
    int n;
    printf("Enter binary: ");
    scanf("%d",&n);
    printf("The decimal value of %d is: %d",n,binaryToDecimal(n));
}