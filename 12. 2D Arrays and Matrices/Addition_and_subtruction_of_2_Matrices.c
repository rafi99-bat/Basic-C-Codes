#include<stdio.h>
int main()
{
    int i, j, row, col;
    printf("Enter Row and Column number of matrix A and B:\n");
    scanf("%d%d", &row, &col);
    int A[row][col], B[row][col], C[row][col], D[row][col];
    printf("Enter values in matrix A:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("Enter values in matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d\t", A[i][j]);
        printf("\n\n");
    }
    printf("Matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d\t", B[i][j]);
        printf("\n\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            C[i][j] = A[i][j] + B[i][j];
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            D[i][j] = A[i][j] - B[i][j];
    }
    printf("Matrix A + Matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d\t", C[i][j]);
        printf("\n\n");
    }
    printf("Matrix A - Matrix B:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d\t", D[i][j]);
        printf("\n\n");
    }
    return 0;
}

