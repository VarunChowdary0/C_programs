/*
IARE College is maintaining
student attendance records
by storing rollno, stdname,
attendance percentage in 5
different subjects.
Write a C program using
structures to find the
average attendance
percentage and print the
following
a. If attendance percentage
¿=75 then print student is
eligible for writing final
exam.
b. If attendance percentage
¿= 65 and ¡75 then print
studentisincondonationlist.
c. Otherwise not eligible for
writingexams.
*/

#include<stdio.h>
#include<conio.h>

struct IAREattendance
{
    char roll[10];
    char name[30];
    int att[5];
};

typedef struct IAREattendance IA;

int Display(IA stdInfo[50],int n)
{
    int i,j,sum,avg;
    for(i=0;i<n;i++)
    {
        printf("\n-----------------------------\n");
        printf("Student name: ");
        puts(stdInfo[i].name);
        printf("Roll number: ");
        puts(stdInfo[i].roll);
        sum=0;
        for(j=0;j<5;j++)
        {
            sum+=stdInfo[i].att[j];
        }
        avg=sum/5;
        if(avg>=75)
        {
            printf("Eligible");
        }
        else if( avg >= 65)
        {
            printf("Condonation");
        }
        else 
        {
            printf("Not Eligible");
        }
    }
}
int main(void)
{
    IA stdInfo[50];
    int n,i,j;
    printf("Number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("--------------\n");
        printf("Student Roll number: ");
        gets(stdInfo[i].roll);
        printf("Name: ");
        gets(stdInfo[i].name);
        for(j=0;j<5;j++)
        {
            printf("Attentence in Sub[%d]: ",j+1);
            scanf("%d",&stdInfo[i].att[j]);
        }
    }
    Display(stdInfo,n);
}

