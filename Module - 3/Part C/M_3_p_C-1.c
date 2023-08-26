/*
Write C program to find the
sum of given list of integers.
*/

#include<stdio.h>

int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of elements in list: %d",sum);
}