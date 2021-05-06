#include <stdio.h>
int main ()
{


        int i, j, m, n, a;

        printf("Enter the order of the matix \n");
        scanf("%d %d", &m, &n);

        int array[m][n];

        if (m == n)
        {
                printf("Enter the co-efficients of the matrix\n");
                for (i = 0; i < m; ++i)
                {
                        for (j = 0; j < n; ++j)
                        {
                                printf("MAT[%d][%d] = ", i+1, j+1);
                                scanf("%dx%d", &array[i][j]);
                        }
                }

                printf("The given matrix is \n");
                for (i = 0; i < m; ++i)
                {
                        for (j = 0; j < n; ++j)
                                printf("\t%d", array[i][j]);
                        printf("\n\n");
                }

                for (i = 0; i < m; ++i)
                {
                        a = array[i][i];
                        array[i][i] = array[i][m - i - 1];
                        array[i][m - i - 1] = a;
                }

                printf("The matrix after changing the \n");
                printf("main diagonal & secondary diagonal\n");
                for (i = 0; i < m; ++i)
                {
                        for (j = 0; j < n; ++j)
                                printf("\t%d", array[i][j]);
                        printf("\n\n");
                }
        }

        else
                printf("The given order is not square matrix\n");
        return 0;
}
