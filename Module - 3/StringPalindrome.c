/*
Write a C program to check whether the given string is palindrome or not without using in-built
function
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
    int n,i;
    int isPal=0;
    char str1[100],strRev[100];
    printf("Enter string: ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        strRev[n-1-i]=str1[i];
    }
    strRev[n]='\0';
    for(i=0;i<n;i++)
    {
        if(str1[i]==strRev[i])
        {
            isPal=1;
        }
        else
        {
            isPal=0;
        }
    }
    if(isPal)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not a Palindrome.\n");
    }
}