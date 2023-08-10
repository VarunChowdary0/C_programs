/*
Write a C program to
maintain a record of “n”
student details using an
array of structures with four
fields (Roll number, Name,
Marks, and Grade). Each
field is of an appropriate
data type. Print the marks
of the student given student
name as input.
*/#include <stdio.h>
#include <string.h>

struct student
{
    char roll[10];
    char name[30];
    int marks[3];
    char grade;
};

typedef struct student S;

int main(void)
{
    FILE *fp;
    S stu;
    fp = fopen("student1.txt", "a");
    int i, n;
    char nme[30];

    printf("Enter Number of students: ");
    scanf("%d", &n);

    printf("Roll Number     Name       M1   M2   M3   Grade\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d %c", stu.roll, stu.name, &stu.marks[0], &stu.marks[1], &stu.marks[2], &stu.grade);
        fprintf(fp, "%s\t%s\t%d\t%d\t%d\t%c\n", stu.roll, stu.name, stu.marks[0], stu.marks[1], stu.marks[2], stu.grade);
    }

    fclose(fp);
    printf("Data saved\n");

    // Clear input buffer
    getchar();

    printf("Enter name to get marks: ");
    fgets(nme, sizeof(nme), stdin);
    nme[strlen(nme) - 1] = '\0'; // Remove newline character

    // Search for student and print marks
    fp = fopen("student1.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    int found = 0;
    while (fscanf(fp, "%s %s %d %d %d %c", stu.roll, stu.name, &stu.marks[0], &stu.marks[1], &stu.marks[2], &stu.grade) != EOF)
    {
        if (strcmp(nme, stu.name) == 0)
        {
            printf("Marks for %s (Roll: %s):\n", stu.name, stu.roll);
            printf("M1: %d, M2: %d, M3: %d\n", stu.marks[0], stu.marks[1], stu.marks[2]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found\n");
    }

    fclose(fp);

    return 0;
}
