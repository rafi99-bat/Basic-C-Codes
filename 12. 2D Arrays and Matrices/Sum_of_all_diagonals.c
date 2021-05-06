#include <stdio.h>

int main()
{
        int i, j, n, sum1=0, sum2=0;
        printf("Enter Size:\n");
        scanf("%d", &n);
        int MAT[n][n];
        printf("Enter values in the matrix:\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                {
                        printf("MAT[%d][%d] = ", i+1, j+1);
                        scanf("%d", &MAT[i][j]);
                }
                printf("\n");
        }
        printf("The entered matrix =\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                        printf("\t%d", MAT[i][j]);
                printf("\n\n");
        }
        printf("The elements of the left diagonal are =\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                {
                        if(i == j)
                        {
                                printf("\t%d", MAT[i][j]);
                                sum1 = sum1 + MAT[i][j];
                        }
                }
        }
        printf("\nSum = %d\n", sum1);
        printf("The elements of the right diagonal are =\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                {
                        if ((i + j) == (n - 1))
                        {
                                printf("\t%d", MAT[i][j]);
                                sum2 = sum2 + MAT[i][j];
                        }
                }
        }
        printf("\nSum = %d\n", sum2);
        return 0;
}
