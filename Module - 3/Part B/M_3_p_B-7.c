/*
Write a C program to copy
the string str2 into str1
without using strcpy()
function
*/
#include<stdio.h>
#include<conio.h>
int main(void)

{
    char str1[200],str2[100];
    int i,n1,n2;
    int j=0;
    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);
    for(n1=0;str1[n1]!='\0';n1++);
    for(n2=0;str2[n2]!='\0';n2++);
    for(i=n1;i<=n1+n2;i++)
    {
        str1[i]=str2[j];
        j++;
    }
    puts(str1);
   
}