/*
IARE maintains salary
details of every employee by
storing their name,
department, basic pay, da,
hra and cca. Store this
information in a nested
structure and display the
salary of an employee.
*/
#include<stdio.h>
#include<string.h>
struct salaryInfo
{
    float basic;
    float DA;
    float HRA;
    float CCA;
};

typedef struct salaryInfo salary;

struct employee
{
    char name[30];
    char departmant[20];
    salary sal;
};
typedef struct employee Emp;

int Display(Emp e[100],int n)
{
    int i;
    printf("|\n     Name      department       basic      DA      HRA     CCA     |\n");
    for(i=0;i<n;i++)
    {
        printf("    %s    ",e[i].name);
        printf("    %s   ",e[i].departmant);
        printf("       %g     ",e[i].sal.basic);
        printf("   %g   ",e[i].sal.DA);
        printf("   %g   ",e[i].sal.HRA);
        printf("   %g   \n",e[i].sal.CCA);
    }
}
int main(void)
{
    int n,i;
    Emp e[100];
    printf("Number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n------------------------\n");
        fflush(stdin);
        printf("Employee name: ");
        gets(e[i].name);
        printf("Department: ");
        gets(e[i].departmant);
        printf("Basic salary: ");
        scanf("%f",&e[i].sal.basic);
        printf("DA: ");
        scanf("%f",&e[i].sal.DA);
        printf("HRA: ");
        scanf("%f",&e[i].sal.HRA);
        printf("CCA: ");
        scanf("%f",&e[i].sal.CCA);
    }
    Display(e,n);
}