#include <stdio.h>
int main()
{
        int i, j, n;
        printf("Enter Size:\n");
        scanf("%d", &n);
        int MAT[n][n], TMAT[n][n];
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
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                        TMAT[j][i] = MAT[i][j];
        }
        printf("The matrix =\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                        printf("\t%d", MAT[i][j]);
                printf("\n\n");
        }
        printf("The transpose matrix =\n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<n; j++)
                        printf("\t%d", TMAT[i][j]);
                printf("\n\n");
        }
        return 0;
}
