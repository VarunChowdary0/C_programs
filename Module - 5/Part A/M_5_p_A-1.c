/*
C program to read name
and marks of n number of
students and store them in
a file.
*/

#include<stdio.h>
int main(void)
{
    int n;
    char name[30],ch;
    int marks[4];
    FILE *fp;

    printf("Enter Number of students: ");
    scanf("%d",&n);
    fp=fopen("studentMarks.txt","a");

    printf("Name\t\tM1\tM2\tM3\tM4\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",name);
        fprintf(fp,"%s\t\t",name);
        for(int j=0;j<4;j++)
        {
            scanf("%d",&marks[j]);
            fprintf(fp,"%d\t",marks[j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);

}