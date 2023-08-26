/*
Write C program to read a
list of elements into an
array and print the reverse
of the list.
*/
#include<stdio.h>

int main(void)
{
    int arr[50],n,i;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%-5d",arr[i]);
    }
}