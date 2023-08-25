/*
Write a C program to
compute the real roots of a
quadratic equation ax2 +
bx+ c = 0. The program
should request for the
values of the constants a, b
and c and print the values
of x1 and x2.
Use the following rules:
i. No solution, if both a and
b are zero There is only one
root, ifa=0
ii. There are no real roots,
if b2 - 4ac is negative
Otherwise, there are two
real roots
Write a C program to test
all the above conditions.
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,c;
    float delta;
    printf("ax^2 + bx + c \nEnter a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    delta = (float)b*b - (4*a*c);
    if(delta < 0)
    {
        printf("Complex Roots.\n");
    }
    else if(delta == 0 )
    {
        printf("Real and equal Roots.\n");
        printf("Roots: %g\n", -b/(float)a);
    }
    else
    {
        printf("Real and distent roots.\n");
        printf("Root-1 : %g\n",(-b+sqrt(delta))/2*a);
        printf("Root-2 : %g\n",(-b-sqrt(delta))/2*a);
    }
}