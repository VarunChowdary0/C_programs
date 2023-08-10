/*
Write C programto find the
transpose of a matrix.
Example
Given matrix
1 2 3
4 5 6
Transpose of the matrix:
1 4
2 5
3 6
*/

#include<stdio.h>
int main(void)
{
    int A[20][20];
    int m,n;
    int i,j;
     printf("Enter Order of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nTranspose of A: \n");
   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%-3d",A[j][i]);
        }
        printf("\n");
    }
}