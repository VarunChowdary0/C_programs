/*
Write a program in C to
read an existing file.
Example :
Input the file name to be
opened :
test.txt
Expected Output :
The content of the file
test.txt is :
This is the content of the
file test.txt.
*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char fileName[30];
    char ch;
    printf("Enter file name: ");
    scanf("%s",fileName);
    FILE *fp;
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
            printf("%c",ch);
        }
    }
}