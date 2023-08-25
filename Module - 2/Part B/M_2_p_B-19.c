/*
Write a program in C to
display the n terms of odd
natural number and their
sum.
Sample Input/ Output:
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5
7 9 11 13 15 17 19
The Sum of odd Natural
Number upto 10 terms : 100
*/

#include<stdio.h>
int main(void)
{
    int i,j=0,n,sum=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;j<n;i++)
    {
        if(i%2!=0)
        {
            printf("%-5d",i);
            sum+=i;
            j++;
        }
    }
    printf("\nSUM : %d",sum);
}