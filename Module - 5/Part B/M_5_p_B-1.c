/*
Write a C program to read
a text file containing some paragraph. Use
fseek()function and read the text after
skipping n characters from beginning of the file.~
*/

#include<stdio.h>
int main(void)
{
    FILE *fp;
    char ch;
    int n;
    fp=fopen("sample.txt","r");
    if(fp == NULL)
    {
        printf("File not found.");
    }
    else
    {
        printf("Enter n: ");
        scanf("%d",&n);
        fseek(fp , n , SEEK_SET);
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
}