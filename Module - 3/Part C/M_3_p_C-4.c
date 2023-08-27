/*
Find the output of the
following code.
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="hellow";
    char str2[]="helow";
    int x;
    x=strcmp(str1,str2);
    printf("%d",x);  // -1
}
