/*
Write a program in C to
find the content of the file
and number of lines in a
Text File.
Test Data :
Input :
The filename to be opened :
test.txt
Expected Output :
The content of the file
test.txt are :
test line 1
test line 2
test line 3
test line 4
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char fileName[30];
    char ch;
    int nl=0;
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
            if(ch=='\n')
            {
                nl++;
            }
        }
    }
    printf("\nNumber of lines: %d",nl);
    fclose(fp);
}