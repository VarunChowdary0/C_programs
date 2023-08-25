/*
Write a C program to check
whether a string is
palindrome or not without
using string function.
*/
#include<stdio.h>
#include<conio.h>

int main(void)
{
    char str[100],rev[100];
    int i,j=0,n,x=0;
    printf("String 1: ");
    gets(str);
    for(n=0;str[n]!='\0';n++);
    for(i=n-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        if(str[i]==rev[i])
        {
            x=1;
        }
        else{
            x=0;
        }
    }
    if(x==1)
    {
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    
}