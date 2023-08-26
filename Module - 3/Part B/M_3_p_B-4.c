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
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                C[i][j]=0;
                for(k=0;k<n;k++)
                {
                    C[i][j] = C[i][j] + (A[i][k] * B[k][j]); 
                }
            }
        }

        //---

        printf("\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%-5d",C[i][j]);
            }
            printf("\n");
        }

    }
}

/*
#include<stdio.h>
int main(void)
{
    int A[10][10],B[10][10],C[10][10];
    int m1,n1,m2,n2;
    int i,j,k;
    int sum;
    printf("Enter Order of matrix A: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter Order of matrix B: ");
    scanf("%d%d",&m2,&n2);
    if(n1==m2)
    {
        printf("Enter matrix A:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter matrix B: \n");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
        
       for(i = 0; i < m1; i++)
        {
            for(j = 0; j < n2; j++)
            {
                C[i][j] = 0;
                for(k = 0; k < n1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("Answer:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                printf("%-5d",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplicaation Not possible");
    }
    
}
*/