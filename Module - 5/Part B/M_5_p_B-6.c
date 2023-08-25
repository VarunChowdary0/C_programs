/*
Write a C program to open
a file names INVENTORY
and store in it the following.
data Item number price
quantityPrinter
P1 Scanner S200 5500 5
Hard disk H300 4500 8
Read the data from the
INVENTORY file and
display the inventory table
with the value of each item.
[Hint: value = price *
quantity and use fprintf()
and fscanf() functions]
*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char item[20];
    int number;
    int price;
    int quantity;
    FILE *fp;
    fp=fopen("INVENTORY.txt","w");
    int n,i;
    printf("Enter number of items: ");
    scanf("%d",&n);
    printf("\nITEM  number  price  quantity\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",item,&number,&price,&quantity);
        fprintf(fp,"%s\t%d\t%d\t%d\n",item,number,price,quantity);
    }
    fclose(fp);
}