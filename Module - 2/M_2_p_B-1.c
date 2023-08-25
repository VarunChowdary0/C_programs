/*
Write a program in C to
display the n terms of
square natural number and
their sum.1 4 9 16 ... n
Terms Sample Input/
Output:
Input the number of terms :
5
Expected Output :
The square natural upto 5
terms are :1 4 9 16 25
The Sum of Square Natural
Number
upto 5 terms = 55
*/

#include<stdio.h>
int main(void)
{
    int n,i;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%-5d",i*i);
    }
}