#include<stdio.h>
int main()
{
    int i, j, k, rowA, colA, rowB, colB, sum;
    printf("Enter Row and Column number of matrix A:\n");
    scanf("%d%d", &rowA, &colA);
    printf("Enter Row and Column number of matrix B:\n");
    scanf("%d%d", &rowB, &colB);
    while(rowA!=colB)
    {
        printf("Multiplication not possible!\n(Warning: column of first matrix must be equal to row of second matrix)\n\n");
        printf("Enter Row and Column number of matrix A:\n");
        scanf("%d%d", &rowA, &colA);
        printf("Enter Row and Column number of matrix B:\n");
        scanf("%d%d", &rowB, &colB);
    }
    int A[rowA][colA], B[rowB][colB];
    printf("Enter values in matrix A:\n");
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
        {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    printf("Enter values in matrix B:\n");
    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colB; j++)
        {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix A =\n");
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
            printf("\t%d", A[i][j]);
        printf("\n\n");
    }
    printf("Matrix B =\n");
    for(i=0; i<rowB; i++)
    {
        for(j=0; j<colB; j++)
            printf("\t%d", B[i][j]);
        printf("\n\n");
    }
    int C[rowA][colB];
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colB; j++)
        {
            sum = 0;
            for(k=0; k<colA; k++)
                sum = sum + A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }
    printf("Matrix A * Matrix B =\n");
    for(i=0; i<rowA; i++)
    {
        for(j=0; j<colB; j++)
            printf("\t%d", C[i][j]);
        printf("\n\n");
    }
    return 0;
}
