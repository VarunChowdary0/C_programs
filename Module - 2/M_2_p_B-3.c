/*
Write a C program to
display the traffic control
signal lights based on the
following.
i. If user entered character
is R or r then print RED
Light Please STOP.
ii. If user entered character
is Y or y then print
YELLOW Light Please
Check and Go.
iii. If user entered character
is G or g then print GREEN
Light Please GO.
iv. If user entered some
other character then print
THERE IS NOSIGNAL
POINT
*/

#include<stdio.h>

int main(void)
{
lb: char ch;
    fflush(stdin);
    printf("Enter Signal: ");
    scanf("%c",&ch);
    if(ch=='R'||ch=='r')
    {
        printf("\t\t\tRED Light Please STOP.\n");
        goto lb;
    }
    else if(ch=='Y'||ch=='y')
    {
        printf("\t\t\tYELLOW Light Please Check and Go.\n");
        goto lb;
    }
    else if(ch=='G'||ch=='g')
    {
        printf("\t\t\tGREEN Light Please GO.\n");
        goto lb;
    }
    else if (ch=='E'||ch=='e')
    {
        printf("\tENDED.................");
    }
    
    else
    {
        printf("Signal Error.\n");
        goto lb;
    }
}