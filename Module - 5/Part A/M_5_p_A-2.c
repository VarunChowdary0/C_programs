/*
Write a C program that
request for a file name and
an integer known as offset
value. The program then
reads the file starting from
the location specified by the
offset value and prints the
contents on the screen. If
the offset value is a positive
integer then printing skips
that many lines. If it is
negative number it prints
that many lines from the
end of the file. An
appropriate error message
should be printed ifanything
goes wrong
*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *fp;
    char fileName[20];
    char ch;
    int offset;
    int lines=0;
    printf("Enter file name: ");
    gets(fileName);
    fflush(stdin);
    fp=fopen(fileName,"r");
    if(fp==NULL)
    {
        printf("File Not Found.\n");
    }
    else
    {
        printf("Enter offset value: ");
        scanf("%d",&offset);
        //fseek(fp,offset,SEEK_SET);
        while((ch=fgetc(fp))!=EOF)
        {
            // printf("%c",ch);
            if(offset > lines );
            if(ch=='\n')
            {
                lines++;
            }
            else if(offset <= lines )
            {
                printf("%c",ch);
            }
        }
    }
    fclose(fp);
}