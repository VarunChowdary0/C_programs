/*
Write a program in C to
replace a specific line with
another text in a file.
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char fileName[30];
    char ch,str[100];
    int line=1,x,done=0;
    printf("Enter file name: ");
    scanf("%s",fileName);
    FILE *fp,*fp2;
    fp=fopen(fileName,"r");
    fp2=fopen("newFile2.txt","w");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("Enter line: ");
        scanf("%d",&x);
        fflush(stdin);
        printf("Enter line to write: ");
        gets(str);
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
            else if(x==line && !done)
            {
                fprintf(fp2,"\n%s",str);
                done=1;
            }

        }
    }
    printf("Line updated.");
    fclose(fp2);
    fclose(fp);
}