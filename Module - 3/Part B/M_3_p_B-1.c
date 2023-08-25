//Write C program to find the sum of given list of integers.
#include<stdio.h>
int main(void)
{
    int a[100],n,i,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%-5d",a[i]);
    }
    printf("\nSum : %d",sum);
}