/*
Write a C program to pass a
copy of the entire structure
namedstores containing
members product name,
price and quantity to a
function.
*/
#include<stdio.h>
#include<string.h>

struct storeData
{
    char productName[30];
    int price;
    int quantity;
};

typedef struct storeData sDt;

sDt Copy(sDt org)
{
    sDt cpy;
    strcpy(cpy.productName,org.productName);
    cpy.price=org.price;
    cpy.quantity=org.quantity;
    return cpy;
}

int main(void)
{
    sDt org;
    sDt cpy;
    printf("Enter Product name: ");
    gets(org.productName);
    printf("Price: ");
    scanf("%d",&org.price);
    printf("Qunatity: ");
    scanf("%d",&org.quantity);
    cpy=Copy(org);
    printf("\n---------------------------\n");
    printf("Product name: ");
    puts(cpy.productName);
    printf("Price: %d\n",cpy.price);
    printf("Quantity: %d",cpy.quantity);
}