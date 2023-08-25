/*
Write a C program to read
your full name, Date of
birth and display the same
using the concept of nested
structure.
*/

#include<stdio.h>
#include<conio.h>
struct MyData
{
    char name[50];
    char DOB[15];
};
int main(void)
{
    typedef struct MyData D;
    D MyInfo;
    printf("Enter your full name: ");
    gets(MyInfo.name);
    printf("Date of Birth: ");
    gets(MyInfo.DOB);
    printf("\nYour InFo\n\n");
    printf("Name: ");
    puts(MyInfo.name);
    printf("Date of birth: ");
    puts(MyInfo.DOB);
}