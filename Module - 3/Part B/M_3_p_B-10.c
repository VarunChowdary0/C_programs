/*

Write a C program to insert
a sub-string in to given
main string at a given
position without using
string functions.

*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char mainStr[500],sub[50];
    int i,n,m,x,z;
    printf("Enter main_String: ");
    gets(mainStr);
    printf("Enter SubString: ");
    gets(sub);
    printf("Enter position to enter: ");
    scanf("%d",&x);
    for(n=0;mainStr[n]!='\0';n++);
    for(m=0;sub[m]!='\0';m++);
    for(i=0;i<n;i++)
    {
        if(i==x)
        {
            for(z=0;z<m;z++)
            {
                printf("%c",sub[z]);
            }
        }
        else{
            printf("%c",mainStr[i]);
        }
    }
}