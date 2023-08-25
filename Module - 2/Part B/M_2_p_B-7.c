/*
Write a C program to
calculate commission for the
input value of sales amount.
Commission is calculated as
per the following rules:
i. Commission is nil for
sales amount Rs5000/.
ii. Commission is 2% for
sales when sales amount is
greater than 5000and less
than equal to10000.
iii. Commission is 5% for
sales amount greater
than10000
*/
#include<stdio.h>
int main(void)
{
    int sls;
    printf("Enter sales amount: ");
    scanf("%d",&sls);
    if(sls<=5000)
    {
        printf("No Commission.\n");
    }
    else if(sls > 5000 && sls <= 10000)
    {
        printf("2 precent commision %gRs.\n",sls*0.02);
    }
    else if( sls > 10000)
    {
        printf("5 precent commission %gRs.\n",sls*0.05);
    }
}