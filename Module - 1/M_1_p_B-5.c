/*
Explain structure of a C
program with example.
*/

/*
    The structure of a C program consists of various components 
    that work together to create a functional program. These 
    components include preprocessor directives, declarations, 
    function definitions, and statements.
*/

/*Structure Example*/

// preprocesser directives (header files)
#include<stdio.h>

// function declerations.
int SUM(int a,int b);
// main function
int main(void)
{
    // variable delerations
    int a,b;
    //input 
    printf("Enter A , B  : ");
    scanf("%d%d",&a,&b);
    //output
    printf("SUM: %d",SUM(a,b));
}

int SUM(int a,int b)
{
    return(a+b);
}