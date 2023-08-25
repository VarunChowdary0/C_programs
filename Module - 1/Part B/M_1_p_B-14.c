/*
Evaluate the following
expressions:
    1. a+=b*=c-=5 where a=3,
    b=5, c=8
    2. int a,b; float x; a=4;
    b=5; x=b/a ;
    3. int a,b; float x; a=4;
    b=5; x=(float)b/a;
*/

#include<stdio.h>
int main(void)
{
    int a,b,c,u;
    float x;
   lb: printf("1. a+=b*=c-=5\n2. x=b/a\n3. x=(float)b/a\n");
    printf("Enter Choice: ");
    scanf("%d",&u);
    switch (u)
    {
    case 1:
        printf("Enter a,b,c: ");
        scanf("%d%d%d",&a,&b,&c);
        printf("\nOutput: %d",a+=b*=c-=5);
        break;
    case 2:
        printf("Enter a,b: ");
        scanf("%d%d",&a,&b);
        x=b/a;
        printf("\nOutput: %f",x);
        break;
    case 3:
        printf("Enter a,b: ");
        scanf("%d%d",&a,&b);
        x=(float)b/a;
        printf("\nOutput: %f",x);
        break;
    default:
        printf("Invlaied choice.");
        goto lb;
        break;
    }
}