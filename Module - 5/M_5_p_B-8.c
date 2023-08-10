/*
Write a Cprogram to read
name and marks of n
number of students from
user and store them in a
file. If the file previously
exists, then add the
information of n students to
the end of existing content.
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *fp;
    char name[30];
    int marks[3];
    int n;
    fp = fopen("student.txt","r");
    if(fp==NULL)
    {
        fp = fopen("student.txt","w");
        goto lb;
    }
    else
    {
      lb:  fp= fopen64("student.txt","a");
        printf("Number of students: ");
        scanf("%d",&n);
        printf("Name      M1    M2     M3\n");
        for(int i=0;i<n;i++)
        {
            scanf("%s%d%d%d",name,&marks[0],&marks[1],&marks[2]);
            fprintf(fp,"%s\t%d\t%d\t%d\n",name,marks[0],marks[1],marks[2]);
        }
    }
    fclose(fp);
}