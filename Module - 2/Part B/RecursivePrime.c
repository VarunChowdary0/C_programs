/*
 prime number is a finite numerical value that is higher than 1, and that can be divided only by 1
and itself. A few of the prime numbers starting in ascending order are 2, 3, 5, 7, 11, 13, 17, 19, 23,
29, etc. Here, your task to write C function with name “IsPrime”. IsPrime function can accept one
integer parameter and return 1 if the parameter is prime number otherwise return 0. Note: Due to
software crash, the system not accepting any loops (for, while, do-while and Goto ). So, complete
“IsPrime” function without using any loops.
*/

#include<stdio.h>

int CheckPrime(int n,int div)
{
    if(div == 1)
    {
        return 1; // divisor reaches 1 => prime.
    }
    if(n % div == 0)
    {
        return 0; // not a prime
    }
    return CheckPrime(n,div-1);
}


int IsPrime(int n)
{
    if(n<=0)
    {
        return 0; // 0 and 1 are not primes.
    }
    return CheckPrime(n,n-1);
}
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(IsPrime(n))
    {
        printf("%d is a prime number.\n");
    }
    else
    {
        printf("%d is not a prime number.\n");
    }
}