/*
Write C program that uses
functions to find the Nth
Fibonaccinumber.
*/
#include<stdio.h>
int NthFIbbo(int n)
{
    int a=0,b=1,i,c;
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
    }
    return arr[n-1];
}
int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("%d th Fibbonacci term : %d",n,NthFIbbo(n));
}
