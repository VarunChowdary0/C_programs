/*
Write a user defined
function which takes an
array of sorted integers and
returns the median value?
[Hint: For odd set of
integers there will be a
single median and for even
set of integers, there will be
two middle values and
medianis the average of the
two middle values]0
*/
#include<stdio.h>
float median(int arr[50],int n)
{
    if(n%2==0)
    {
        return ((arr[n/2]+arr[(n-1)/2])/2.0);
    }
    else
    {
        return (arr[n/2]);
    }
}
int main(void)
{
    int arr[50],i,n;
    printf("Enter no of terms: ");
    scanf("%d",&n);
    printf("Enter an sorted array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nMedian : %g",median(arr,n));
}