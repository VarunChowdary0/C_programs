/*
Define a structure data type
called time struct
containing 3 members
integer hour, integer minute
and integer second. Develop
a program that would assign
values to the individual
members and display the
time in the following
format:16 : 40 : 51 Learner
to recallstructures and
demonstrate the use of
structures to access the
elements of structure.
*/
#include<stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};
typedef struct time T;
int main(void)
{
    T setTime;
    printf("Enter hours: ");
    scanf("%d",&setTime.hour);
    printf("Enter minutes: ");
    scanf("%d",&setTime.minute);
    printf("Enter seconds :");
    scanf("%d",&setTime.second);
    printf("TIME :=> %d : %d : %d",setTime.hour%24,setTime.minute%60,setTime.second%60);
}