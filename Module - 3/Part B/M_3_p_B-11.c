/*
Write C program that uses
both recursive and
non-recursive functions to
find the sum of n
naturalnumbers.
*/
#include<stdio.h>
int Recursive(n,s)
{
    if (n>0)
    {
        s+=n;
        n--;
        Recursive(n,s);
    }
    else
    {
        return s;
    }
    
}
int NonRecursive(n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int main(void)
{
    int n,s=0;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Non recursive sum: %d",NonRecursive(n));
    printf("\nRecursive Sum: %d",Recursive(n,s));
}
