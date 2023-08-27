/*
Demonstrate pointers to compute the sum, mean and standard deviation of all elements stored in
an array of n real numbers using C program.
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int arr[50];
    int n,sum=0,i;
    float mean,variance=0,SD;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Enter %d terms\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    mean=(float)sum/n;

    // standard deviation;

    for(i=0;i<n;i++)
    {
        variance+= (arr[i]- mean)*(arr[i]- mean);
    }
    SD = sqrt(variance);
    printf("SUM: %d\nMEAN: %g\nSD: %g\n",sum,mean,SD);

}