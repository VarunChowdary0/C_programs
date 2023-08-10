/*
A marketing company is
having 50 employees and it
maintains employee records
in terms of their empid,
empname, desg, salary,
quantity, sales amount. The
company gives 10% hike in
salary to the employees if
their sales amount is more
than 50000/-. Write a C
program that displays the
employee records who got
hike in salary
*/

#include<stdio.h>
#include<conio.h>

struct EmployeeInfo
{
    char empid[10];
    char empname[30];
    char desg[10];
    int salary;
    int quantity;
    int salesAmount;
};
typedef struct EmployeeInfo EI;

int DisplayEmloyees(EI employeeArr[50],int n)
{
    int i;
    printf("\n--------Hikes--------------\n");

    for(i=0;i<n;i++)
    {
        if(employeeArr[i].salary>50000)
        {
            puts(employeeArr[i].empname);
        }
    }
}
int main(void)
{
    EI e[50];
    int n,i;
    printf("Enter no of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter employeeID: ");
        gets(e[i].empid);
        printf("Enter employee name: ");
        gets(e[i].empname);
        printf("Enter employee designation: ");
        gets(e[i].desg);
        printf("Enter salary: ");
        scanf("%d",&e[i].salary);
        printf("Enter Quantity: ");
        scanf("%d",&e[i].quantity);
        printf("Enter sales amount: ");
        scanf("%d",&e[i].salesAmount);
    }
    DisplayEmloyees(e,n);
}