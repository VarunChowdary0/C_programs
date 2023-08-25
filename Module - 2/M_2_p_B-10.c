/*
Write a C program to print
the following pattern.
1
3 5
7 9 11
13 15 17 19
*/

#include <stdio.h>

int main(void)
{
    int i, n0 = 1, n1 = 20, j, k = 0, flag, x = 0;
    int arr[10];
    
    for (i = n0; i <= n1; i++)
    {
        flag = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag <= 1)
        {
            arr[k] = i;
            k++;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", arr[x]);
            x++;
        }
        printf("\n");
    }

    return 0;
}
