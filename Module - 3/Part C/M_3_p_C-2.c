/*
Write C program to find the
largest and smallest number
among a list of integers.
*/

#include<stdio.h>

int main(void)
{
    int arr[50],n,max,min,i;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum: %d\nMinimum: %d\n",max,min);
}