/*
Write a program that
counts from one to ten,
prints the values on a
separate line for each, and
includes a message of your
choice when the count is 3
and a different message
when the count is 7
*/
#include<stdio.h>
int main(void)
{
    int i=1;
    for(i=1;i<=10;i++)
    {
        if(i==3)
        {
            printf("3. The number is three.\n");
        }
        if(i==7)
        {
            printf("7. The number is seven.\n");
        }
        else
        {
            printf("%d.\n",i);
        }
    }
}