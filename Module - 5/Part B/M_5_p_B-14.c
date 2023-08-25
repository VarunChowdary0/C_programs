/*
Write a program in C to
find the Number of lines in
a Text File.
*/
#include<string.h>
#include<stdio.h>
int main(void)
{
    char fileName[30];
    char ch;
    printf("Enter file name: ");
    scanf("%s",fileName);
    FILE *fp;
    int nl=0;
    fp=fopen(fileName,"r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("Contents of File:\n");
        while((ch=(fgetc(fp)))!=EOF)
        {
            if(ch=='\n')
            {
                nl++;
            }
        }
    }
    printf("Lines: %d",nl);
    fclose(fp);
}