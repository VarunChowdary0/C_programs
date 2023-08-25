/*
Write a program in C to
write multiple lines in a text
file.
Test Data :
Input :
The number of lines to be
written : 4
test line 1
test line 2
test line 3
test line 4
Expected Output :
The content of the file
test.txt is :
test line 1
test line 2
test line 3
test line 4
*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100],ch;
    int n,i;
    FILE *fp;
    fp = fopen("MultiLine.txt","w");
    printf("Enter number of lines: ");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        gets(str);
        fprintf(fp,"%s\n",str);
    }
    printf("\nSaved.");
    fclose(fp);
}
