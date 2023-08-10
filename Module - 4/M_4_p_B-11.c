/*
 Write a C program to
maintain a record of n
student details using an
array of structures with four
fields (rollno, name, marks
and grade).
Assume appropriate data
type for each field. Print
the marks of the student
name as input.
*/
#include<stdio.h>
#include<string.h>

struct STUDENT
{
    char roll[10];
    char name[30];
    int marks;
    char grade;
};
typedef struct STUDENT Std;
int main(void)
{
    Std students[50];
    int n,i;
    char look[30];
    printf("No of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n-------------------------\n");
        fflush(stdin);
        printf("Enter Roll number:");
        gets(students[i].name);
        printf("Name: ");
        gets(students[i].name);
        printf("Marks: ");
        scanf("%d",&students[i].marks);
        printf("Garade: ");
        fflush(stdin);
        scanf("%c",&students[i].grade);
    }
    printf("\n<------------------------------>\n");
    fflush(stdin);
    printf("Enter name : ");
    gets(look);
    for(i=0;i<n;i++)
    {
        if(strcmp(look,students[i].name)==0)
        {
            printf("Marks: %d\nGrade: %c",students[i].marks,students[i].grade);
        }
    }
}