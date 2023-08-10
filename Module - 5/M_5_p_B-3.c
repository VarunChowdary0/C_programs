/*
WWrite a C program to
read a text file “sample.txt”
and print the following.
a) Substring of N characters
from the position I.
b) Reverse order of
substring of N characters
produced in a
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *fp;
    char ch,str[300];
    int I,N,i;
    fp=fopen("sample.txt","r");
    if(fp == NULL )
    {
        printf("File not Found");
    }
    else
    {
        printf("Enter I and N: ");
        scanf("%d%d",&I,&N );
        fseek( fp , I , SEEK_SET );
        for(i=0;i<N-I;i++)
        {
            ch = fgetc(fp);
            printf("%c",ch);
            str[i]=ch; 
        }
        printf("\n");
        puts(strrev(str));
        fclose(fp);
    }
}