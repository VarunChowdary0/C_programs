/*Write a C program to
compute and display the
sum of all integers that are
divisible by 6 but not
divisible by 4 and lie
between 0 and 100. The
program should also count
and display the number of
such values.
*/

#include<stdio.h>

int main(void)
{
    int i,sum=0,count=0;
    for(i=0;i<=100;i++)
    {
        if(i%6==0 && i%4!=0 )
        {
            printf("%-5d",i);
            sum+=i;
            count++;
        }
    }
    printf("\nSum : %d\nCount :%d",sum,count);
}