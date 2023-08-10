/*
Write a C program to read
your email id and print the
number of vowels,
consonants and special
characters in it.
*/
#include<conio.h>
#include<stdio.h>
int main(void)
{
    char email[50];
    int c=0,v=0,sp=0,i,n;
    printf("Email: ");
    gets(email);
    for(n=0;email[n]!='\0';n++);
    for(i=0;i<n;i++)
    {
        if(email[i]>=65 && email[i]<90 || email[i]>=97 && email[i]<122)
        {
            if(email[i]=='A' || email[i]=='E' || email[i]=='I'|| email[i]=='O'|| email[i]=='U'||email[i]=='a' || email[i]=='e' || email[i]=='i'|| email[i]=='0'|| email[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else
        {
            sp++;
        }
        
    }
    printf("\nVowels : %d\nConsonents: %d\nSpecial: %d",v,c,sp);
}