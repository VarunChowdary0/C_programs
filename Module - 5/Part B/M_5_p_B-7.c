/*
Write a C program to read a
given file, convert first letter
of each word into uppercase
and copy the contents of
converted file into a new file.
*/#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    FILE *fp1, *fp2;
    char ch;
    int cow = 0;

    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("upperCaseOutPut.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File not found");
    } else {
        while ((ch = fgetc(fp1)) != EOF) {
            if (ch == ' ' && cow) {
                fputc(ch, fp2);
                cow = 0;
            } else {
                if (cow) {
                    ch = tolower(ch);
                    cow = 0;
                } else {
                    ch = toupper(ch); 
                }
                fputc(ch, fp2);
                cow = 1;
            }
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
