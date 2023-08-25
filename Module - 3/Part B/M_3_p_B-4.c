// Write C program to read two matrices and find the addition and multiplication of two matrices.
#include<stdio.h>
int main(void)
{
    int A[20][20],B[20][20],C[20][20];
    int m,n,p,q;
    int i,j,k;
start:  printf("Enter Order of matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter Order of matrix B: ");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("\nMatrix Multiplication not possible\n");
        goto start;
    }
    else
    {
        printf("\nMatrix A:---->\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("\nMatrix B:---->\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }

        //---------
        for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                C[i][j]=0;
                for(k=0;k<p;k++)
                {
                    C[i][j] = C[i][j] + (A[i][k] * B[k][j]); 
                }
            }
        }

        //---

        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%-5d",C[i][j]);
            }
            printf("\n");
        }

    }
}