/*
Write a C program to print
first n lines of Floyd’s
Triangle. 
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>
int main(void)
{
    int n,i,j,x=0;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d  ",++x);
        }
        printf("\n");
    }
}