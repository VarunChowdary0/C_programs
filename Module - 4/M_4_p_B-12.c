/*
Define a structure called
complex consisting of two
floating point numbers x
and y and declare a variable
p of type complex. Assign
initial values 0.0 and 1.1 to
the members
*/

#include<stdio.h>

struct complex
{
    float r,i;
};
typedef struct complex C;

int main(void)
{
    C p;
    printf("Enter Real part: ");
    scanf("%f",&p.r);
    printf("Enter Imaginary part: ");
    scanf("%f",&p.i);
    printf("Complex: %g + (%g)i",p.r,p.i);
}