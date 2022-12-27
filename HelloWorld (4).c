#include<stdio.h>
int main()
{
    int m,M=0,n,p,q,k=0,i=0,j=0;
    printf("Enetr number of row and column of A[][] matrix is\n");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("Enetr number of row and column of A[][] matrix is\n");
    scanf("%d %d",&p,&q);
    int B[p][q];
    if(n==p)
    {int C[m][q];
        printf("Matrix a and b is Multiplicable\n");
        printf("Enetr element of A matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enetr element of B matrix\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }
        }
        printf("After multiplication\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                {
                    M=M+A[i][k]*B[k][j];
                }
            C[i][j]=M;
            M=0;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        }
    }
    else{
        printf("Both Matrix is not Multiplable\n");
    }
}