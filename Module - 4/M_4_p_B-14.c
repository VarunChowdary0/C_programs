/*
Define a structure named
census with the following 3
members
a. A character array city[ ]
to storenames.
b. A long integer to store
population of thecity.
c. A float member to store
the literacylevel.
Write a program to do
thefollowing:
d. To read details for 5
cities randomly using an
arrayvariable.
e. To sort the
listalphabetically.
f. To sort the list based on
literacylevel.
g. To sort the list based
onpopulation.
h. To display sortedlists
*/

#include<stdio.h>
#include<string.h>

struct census
{
    char cityName[30];
    long int population;
    float literacyLevel;
};
typedef struct census C;
int Display(C data[100],int n);
int SortByName(C data[100],int n)
{
    printf("\n------Sorting By city name ------------\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(data[i].cityName,data[j].cityName)>0)
            {
                C temp = data[i];
                data[i] = data[j];
                data[j]=temp;
            }
        }
    }
    Display(data,n);
}
int SortByLitracy(C data[100],int n)
{
    int i,j;
    printf("\n------Sorting By Litetacy Leval  ------------\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i].literacyLevel<data[j].literacyLevel)
            {
                C temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }    
    Display(data,n);
}
int SortByPopulation(C data[100],int n)
{
    int i,j;
    printf("\n------Sorting By Population  ------------\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i].population<data[j].population)
            {
                C temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    Display(data,n);
}
int Display(C data[100],int n)
{
    printf("\n\t CITY \t  LITERACY \t  POPULATION ");
    for(int i=0;i<n;i++)
    {
        printf("\n<|-----------------------------------------------|>\n");
        printf("|  \t%s",data[i].cityName);
        printf(" \t%g",data[i].literacyLevel);
        printf("    \t%ld|",data[i].population);
    }
    printf("\n<|-----------------------------------------------|>\n");
}
int main(void)
{
    C data[100];
    int n,i;
    printf("Enter number of cities: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n--------------------------------\n");
        fflush(stdin);
        printf("Enter cityName: ");
        gets(data[i].cityName);
        printf("Enter population: ");
        scanf("%ld",&data[i].population);
        printf("Enter literacy level: ");
        scanf("%f",&data[i].literacyLevel);
    }
    SortByName(data,n);
    SortByLitracy(data,n);
    SortByPopulation(data,n);
}

