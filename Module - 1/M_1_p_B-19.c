/*
Evaluate the following
expressions:
1. x = a-b/3 + c*2 - 1
when a = 9, b= 12 & c = 13
2. 10 != 10 —— 5 ¡ 4 && 8
3. Evaluate the
z=5%3/8*3+4
*/

#include<stdio.h>
int main(void)
{
    int a,b,c,u;
    int x,z;
   lb: printf("1. x = a-b/3 + c*2 - 1\n2. 10 != 10 || !(5 != 4) && 8\n3. z=5%3/8*3+4\n");
    printf("Enter Choice: ");
    scanf("%d",&u);
    switch (u)
    {
    case 1:
        printf("Enter a,b,c: ");
        scanf("%d%d%d",&a,&b,&c);
        x = a-b/3 + c*2 - 1;
        printf("\nOutput: %d",x);
        break;
    case 2:
        x=10 != 10 || !(5 != 4) && 8;
        printf("\nOutput: %d",x); // 0
        break;
    case 3:
        z=5%3/8*3+4;
        printf("\nOutput: %d",z); // 4
        break;
    default:
        printf("Invlaied choice.");
        goto lb;
        break;
    }
}