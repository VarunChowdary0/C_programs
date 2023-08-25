/*
Write a C program to print
Armstrong numbers
between 1 to n where n
value is entered by the user.
[Hint: Armstrong number is
defined as the sum of cubes
of individual digits of a
number. e.g. 371 = 33 + 73
+ 13 ]
*/
#include<stdio.h>

int main(void)
{
    int n,rem,temp,j,ams=0;
    printf("Enter N: ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        temp=j;
        ams=0;
        while(temp)
        {
            rem = temp %10;
            temp=temp/10;
            ams+=rem*rem*rem;
        }
        if(j == ams)
        {
            printf("%-5d",ams);
        }
    }
}
