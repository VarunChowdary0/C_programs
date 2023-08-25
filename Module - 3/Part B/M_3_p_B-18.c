/*
Write a C program that
uses functions to find 2”s
complement of a
binarynumber.
*/
#include<stdio.h>
#include<string.h>
int TwosCompliment(char x[20])
{
    int i,j,len;
    len = strlen(x);
    for(i=len-1;i>=0;i--)
    {
        if(x[i]=='1')
        {
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        if(x[j]='0')
        {
            x[j]='1';
        }
        else
        {
            x[j]='0';
        }
    }

}

int main(void)
{
    char x[20];
    printf("Enter Binary: ");
    gets(x);
    TwosCompliment(x);
    printf("Two's Compliment: ");
    puts(x);
}
