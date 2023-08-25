/*
A character is entered
through keyboard. Write a
C program to determine
whether the character
entered is a capital letter, a
small case letter, a digit or a
special symbol using if-else
and switch case. The
following table shows the
range of ASCII values for
various characters.
Characters ASCII values
A–Z 65 –90
a–z 97 –122
0–9 48 – 57
Special symbols 0 – 47, 58 –
64, 91 – 96, 123 -127
*/

#include<stdio.h>
int main(void)
{
    char ch;
    fflush(stdin);
    printf("Enter character: ");
    scanf("%c",&ch);
    if((ch >=0 && ch<= 47) || (ch >=58 && ch<=64) || (ch >=123 && ch<= 127))
    {
        printf("A special character.\n");
    }
    else if(ch >= 65 && ch<= 90)
    {
        printf("A Caplital letter .\n");
    }
    else if(ch >=97 && ch<= 122)
    {
        printf("A small letter\n");
    }
    else if(ch >=48 && ch<= 57)
    {
        printf("A digit.\n");
    }
    else 
    {
        printf("An unknown special character.\n");
    }
}