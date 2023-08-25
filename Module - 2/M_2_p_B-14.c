/*
Write a C program to
generate all prime numbers
between 1 and n, where n
value is supplied by the
user.
*/

#include<stdio.h>
int main(void)
{
    int i,j,n,fl;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fl=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                fl++;
            }
        }
        if(fl<=1)
        {
            printf("%-5d",i);
        }
    }
}