#include <stdio.h>
#include <math.h>

int main ()
{
        int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;

        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);

        int array[m][n];

        printf("Enter the coefficients of the matrix \n");
        for (i = 0; i < m; ++i)
        {
                for (j = 0; j < n; ++j)
                {
                        printf("MAT[%d][%d] = ", i+1, j+1);
                        scanf("%d", &array[i][j]);
                        a = array[i][j] * array[i][j];
                        sum1 = sum1 + a;
                }
                printf("\n");
        }

        normal = sqrt(sum1);
        printf("The normal of the given matrix is = %d\n", normal);

        return 0;
}
