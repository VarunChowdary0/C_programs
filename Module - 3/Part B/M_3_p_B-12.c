/*
Write a C program that uses
functions to convert decimal
number to binarynumber.
*/
#include<stdio.h>
int binary(int n)
{
    int bi=0,rem,temp,i=1;
    temp=n;
    while (n)
    {
        rem = n%2;
        n=n/2;
        bi += rem*i;
        i=i*10;
    }
    return bi;
}
int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Binary : %d",binary(n));
}