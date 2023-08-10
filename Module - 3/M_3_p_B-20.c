/*
Write a program in C to
check whether a number is a
prime number or not using
the function.
Example :
Input a positive number : 5
Expected Output :
The number 5 is a prime
number
*/
#include<stdio.h>

int ISPRIME(int n)
{
    int i,count=0;
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 1)
    {
        printf("The number %d is a prime number.",n);
    }
    if(count<1)
    {
        printf("The number %d is not a prime number.",n);
    }
}
int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    ISPRIME(n);
}