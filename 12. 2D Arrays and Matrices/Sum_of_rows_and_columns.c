#include <stdio.h>
int main ()
{
        int i, j, m, n, sum = 0;

        printf("Enter the rows and columns of the matrix\n");
        scanf("%d %d", &m, &n);

        int array[m][n];

        printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < m; ++i)
        {
                for (j = 0; j < n; ++j)
                {
                        printf("MAT[%d][%d] = ", i+1, j+1);
                        scanf("%d", &array[i][j]);
                }
                printf("\n");
        }

        for (i = 0; i < m; ++i)
        {
                for (j = 0; j < n; ++j)
                {
                        sum = sum + array[i][j];
                }

                printf("Sum of the %d row is = %d\n", i, sum);
                sum = 0;
        }
        sum = 0;
        for (j = 0; j < n; ++j)
        {
                for (i = 0; i < m; ++i)
                {
                        sum = sum + array[i][j];
                }

                printf("Sum of the %d column is = %d\n", j, sum);
                sum = 0;
        }

        return 0;
}
