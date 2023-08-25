/*
Write a program in C to
merge two files and write it
in a new file.
*/


#include<string.h>
#include<stdio.h>
int main(void)
{
    char fileName[30],fileName1[30];
    char ch;
    printf("Enter file name: ");
    scanf("%s",fileName);
    printf("Enter file name: ");
    scanf("%s",fileName1);
    FILE *fp,*fp2,*fp3;
    int nl=0;
    fp=fopen(fileName,"r");
    fp2=fopen(fileName1,"r");
    fp3=fopen("MergeFile.txt","w");
    if(fp==NULL || fp2==NULL)
    {
        printf("File not found");
    }
    else
    {
        while((ch=(fgetc(fp)))!=EOF)
        {
            fputc(ch,fp3);
        }
        while((ch=(fgetc(fp2)))!=EOF)
        {
            fputc(ch,fp3);
        }
    printf("File Merged.");
    }
    fclose(fp);
}