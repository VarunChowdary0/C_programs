/*
Write a C program to store
numbers into an array and
find the frequency of a
particular number in array
and print it.
*/

#include<stdio.h>
int main(void)
{
    int a[100],x,i,n,fr=0;
    printf("No of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter X: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            fr++;
        }
    }
    printf("\nFrequency of %d is : %d",x,fr);
}