/*
Define a structure called
cricket that will describe the
following information:
Player name ,Team name
,Batting average using
cricket, declare an array
play program to read the
information about all the
50players and print a
teamwise with their batting
average.
*/

#include<stdio.h>
#include<string.h>

struct cricket
{
    char name[30];
    char team[20];
    float Avg;
};

typedef struct cricket crick;
int Display(crick C[100],int n)
{
    int i;
    printf("\n|   Name            Team            Average runs \n|");
    for(i=0;i<n;i++)
    {
        printf("|  %s  ",C[i].name);
        printf("       %s   ",C[i].team);
        printf("         %g    |\n",C[i].Avg);
    }
}
int SortByAvg(crick C[100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(C[i].Avg<C[j].Avg)
            {
                crick temp = C[i];
                C[i]=C[j];
                C[j]=temp;
            }
        }
    }
    Display(C,n);
}
int main(void)
{
    int n,i;
    crick C[100];
    printf("Enter number of players: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n---------------------\n");
        fflush(stdin);
        printf("Plyer name: ");
        gets(C[i].name);
        printf("Team: ");
        gets(C[i].team);
        printf("Average Runs: ");
        scanf("%f",&C[i].Avg);
    }
    SortByAvg(C,n);
}