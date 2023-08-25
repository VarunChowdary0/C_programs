/*
Write a C program to print
the following pattern.
1
12
123
1234
*/

#include<stdio.h>

int main(void)
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}