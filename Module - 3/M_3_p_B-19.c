/*
Write a program in C to
find the square of any
number using the function.
Example :
Input any number for
square : 20
Expected Output :
The square of 20 is : 400.00
*/
#include<stdio.h>
float Square(int n)
{
    return n*n;
}
int main(void)
{
    float n;
    printf("Enter N: ");
    scanf("%f",&n);
    printf("Square of %g is: %.2f",n,Square(n));
}