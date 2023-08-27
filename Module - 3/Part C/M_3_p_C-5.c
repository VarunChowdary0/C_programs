/*
Find the output of the
following code.
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="NEW DELHI";
    char str2[]="BANGALORE";
   // strcpy(str1,str2,4); // error takes only two parameters.
    strcpy(str1,str2);
    printf("%s",str1);  // BANGALORE
}