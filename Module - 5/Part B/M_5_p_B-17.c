/*
Write a program in C to
delete a specific line from a
file.
*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char fileName[30];
    char ch;
    int line=1,x;
    printf("Enter file name: ");
    scanf("%s",fileName);
    FILE *fp,*fp2;
    fp=fopen(fileName,"r");
    fp2=fopen("newFile.txt","w");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("Enter line to be removed: ");
        scanf("%d",&x);
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == '\n')
            {
                line++;
            }
            if (x != line)
            {
                fputc(ch, fp2); // Write character to new file
            }
        }
    }
    printf("Line removed.");
    fclose(fp2);
    fclose(fp);
}