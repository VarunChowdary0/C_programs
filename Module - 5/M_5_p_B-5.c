/*
Write a program in C to
create and store information
in a text file.
Example :
Input a sentence for the file :
This is the content of the
file test.txt.
Expected Output :
The file test.txt created
successfully...!!
*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *fp;
    char str[100],ch;
    fp=fopen("test.txt","w");
    printf("Enter string: ");
    gets(str);
    fprintf(fp,str);
    printf("The file test.txt created successfully...!!");
}