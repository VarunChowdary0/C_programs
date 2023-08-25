/*
Write a C program to read
in two numbers, x and n,
and then compute the sum
of this geometric progression1+x+x2+x3+...xn. For
example: if n is 3 and x is 5,
then the program computes
1+5+25+125. Print x, n,
the sum. Perform error
checking. For example the
formula does not make sense
for negative Exponents – if
n is less than 0. Have your
program print an error
message if n¡0,then go back
and read in then pair of
numbers of without
computing the sum. Are
any values of x also illegal?
If so, test for them too
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,n,i,j,sum=0,powDig;
   lb: printf("Enter X and N : " );
    scanf("%d%d",&x,&n);
    if(n>=0)
    {
        for(i=0;i<=x;i++)
        {
            powDig=pow(5,i);
            sum+=powDig ;
          //  printf("%-5d",powDig);
        }
        printf("GP : %d",sum);
    }
    
    else{
        printf("N is negitive.\n");
        goto lb;
    }
}