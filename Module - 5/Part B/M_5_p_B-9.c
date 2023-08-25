/*
Write a C program to print
the following from a given
file:
a) Number of characters
b) Number of spaces
c) Number of tabs
d) Number ofnewlines.
*/
#include<stdio.h>

int main(void)
{
    FILE *fp;
    char ch;
    int space=0,cht=0,tab=0,nls=0;
    fp=fopen("sample.txt","r");
    if(fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        while ((ch=fgetc(fp))!=EOF)
        {
            if(ch==' ')
            {
                space++;
            }
            if(ch=='\t')
            {
                tab++;
            }
            if(ch=='\n')
            {
                nls++;
            }
            else
            {
                cht++;
            }
        }
    }
    printf("Characters: %d\nSpaces: %d\nTabs: %d\nNew lines: %d",cht,space,tab,nls);
}