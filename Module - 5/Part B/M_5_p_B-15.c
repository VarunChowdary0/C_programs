/*
Write a program in C to
count a number of words
and characters in a file.
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
    int nl=0,wrd=0;
    fp=fopen(fileName,"r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        while((ch=(fgetc(fp)))!=EOF)
        {
           nl++;
           if(ch==' ')
           {
                wrd++;
           }
        }
    }
    printf("characters: %d\n",nl);
    printf("Words: %d",wrd+1);
    fclose(fp);
}