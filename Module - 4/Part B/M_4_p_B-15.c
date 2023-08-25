/*
Define a structure that can
describe a hotel. It should
have members that include
the name, address, grade,
average room charge, and
number of rooms.
Write functions to perform
the following operations:
a. To print out hotels of a
given grade in order
ofcharges.
b. To print out hotels with
room charges less than a
givenvalue

*/
#include<stdio.h>
#include<string.h>

struct hotel
{
    char name[30];
    char address[50];
    int grade;
    int roomCharge;
    int rooms;
};
typedef struct hotel H;

int display(H set[100],int n)
{
    printf("\n|---\tName \t address \t grade \t Charge \tNo of rooms---|\n");
    for(int i=0;i<n;i++)
    {
        printf("   \t%s  ",set[i].name);
        printf("    %s",set[i].address);
        printf("\t  %d",set[i].grade);
        printf("\t  %d",set[i].roomCharge);
        printf("\t\t\t%d",set[i].rooms);
        printf("\n--------------------------------------------------------------------\n");
    }
}

int SortByFair(H set[100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(set[i].roomCharge>set[j].roomCharge)
            {
                H temp = set[i];
                set[i]=set[j];
                set[j]=temp;
            }
        }
    }
    printf("\n\n");
    display(set,n);
}

int Filter(H set[100],int n)
{
    int i,j=0;
    H filter[100];
    int reqPr;
    printf("Enter price: ");
    scanf("%d",&reqPr);
    for(i=0;i<n;i++)
    {
        if(set[i].roomCharge<=reqPr)
        {
            filter[j]=set[i];
            j++;
        }
    }
    printf("\n-------------Hotels under %d Rs -----------------\n",reqPr);
    display(filter,j);
}
int main(void)
{
    H set[100];
    int n,i;
    printf("Number of hotels: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n------------------------------\n");
        fflush(stdin);
        printf("Hotel name: ");
        gets(set[i].name);
        printf("Address: ");
        gets(set[i].address);
        printf("Grade: ");
        scanf("%d",&set[i].grade);
        printf("Average fair: ");
        scanf("%d",&set[i].roomCharge);
        printf("Number of rooms: ");
        scanf("%d",&set[i].rooms);
    }
    Filter(set,n);
    SortByFair(set,n);
}