/*
Write a program in C to
find the prime numbers
within a range of numbers.
Sample Input/ Output:
Input starting number of
range: 1
Input ending number of
range : 50
Expected Output :
The prime number between
1 and 50 are
:2 3 5 7 11 13 17 19 23 29 31
37 41 43 47
*/
#include<stdio.h>
int main(void)
{
    int i,j,n0,n1,flag=0;
    printf("Enter Starting number: ");
    scanf("%d",&n0);
    printf("Enter last number: ");
    scanf("%d",&n1);
    for(i=n0;i<=n1;i++)
    {
        flag=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag<=1)
        {
            printf("%-5d",i);
        }
    }
}