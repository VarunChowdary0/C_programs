/*
Write a program in C to
copy a file in another name
*/

#include<string.h>
#include<stdio.h>
int main(void)
{
    char fileName[30];
    char ch;
    printf("Enter file name: ");
    scanf("%s",fileName);
    FILE *fp,*fp2;
    int nl=0;
    fp=fopen(fileName,"r");
    fp2=fopen("copyFile.txt","w");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("Contents of File:\n");
        while((ch=(fgetc(fp)))!=EOF)
        {
            fputc(ch,fp2);
        }
    printf("File copied.");
    }
    fclose(fp);
}