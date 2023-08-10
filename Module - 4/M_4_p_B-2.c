/*
Write a C program to
maintain a book structure
containing name,author and
pages as structure members.
Pass the address of
structure variable to a user
defined function and display
the contents.
*/
#include<stdio.h>
#include<conio.h>
struct bookInfo
{
    char Bookname[30];
    char Author[30];
    int pages;
};
typedef struct bookInfo bkinf;
int DisplayInfo(bkinf book1)
{
    printf("\n------------------------------\n");
    printf("Book name: ");
    puts(book1.Bookname);
    printf("Author: ");
    puts(book1.Author);
    printf("Pages: %d",book1.pages);
}
int main(void)
{
    bkinf book1;
    printf("Book name: ");
    gets(book1.Bookname);
    printf("Author: ");
    gets(book1.Author);
    printf("Pages: ");
    scanf("%d",&book1.pages);
    DisplayInfo(book1);
}