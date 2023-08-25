//Write C program to find the largest and smallest number among a list of integers.

#include<stdio.h>
int main(void)
{
    int a[100],n,i,max,min;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMax : %d\nMin : %d",max,min);
}