/*
Write C program that uses
both recursive and
non-recursive functions to
find the factorial of a
givennumber.
*/
#include<stdio.h>
int NonRecursiveFact(int n)
{
    int i,fact=1;
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int RecursiveFact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return ( n * RecursiveFact(n-1));
    }
}

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("FActorial nonRecursive: %d",NonRecursiveFact(n));
    printf("\nFactoiral Recursive: %d",RecursiveFact(n));
}