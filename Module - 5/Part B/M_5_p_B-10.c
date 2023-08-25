/*
Create a structure named
employee containing name,
age and basic pay. Write a
C program to create 5
employee records andwrite
to a file. Then read the
records from file and display
it.
*/
#include<stdio.h>
#include<string.h>

struct employee
{
    char name[30];
    int age;
    int basic;
};
typedef struct employee E;
int main(void)
{
    FILE *fp;
    fp=fopen("employee.txt","a");
    E emp;
    int n,i;
    char ch;
    printf("number of employees: ");
    scanf("%d",&n);
    printf("NAME    AGE    BASIC\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",emp.name,&emp.age,&emp.basic);
        fprintf(fp,"%s\t%d\t%d\n",emp.name,emp.age,emp.basic);
    }
    fclose(fp);
    fp=fopen("employee.txt","r");
    printf("Info saved.\n");
    while ((ch=(fgetc(fp)))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}