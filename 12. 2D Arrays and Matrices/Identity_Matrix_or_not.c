#include <stdio.h>

int main()
{
        int rows, cols, i, j, a[10][10], Flag = 1;

        printf("Please Enter Number of rows and columns :\n");
        scanf("%d %d", &rows, &cols);

        printf("Please Enter the Matrix Elements \n");
        for(i = 0; i < rows; i++)
        {
                for(j = 0; j < cols; j++)
                {
                        printf("A[%d][%d] = ", i+1, j+1);
                        scanf("%d", &a[i][j]);
                }
                printf("\n");
        }

        for(i = 0; i < rows; i++)
        {
                for(j = 0; j < cols; j++)
                {
                        if(a[i][j] != 1 && a[j][i] != 0)
                        {
                                Flag = 0;
                                break;
                        }
                }
        }
        if(Flag == 1)
                printf("The Matrix that you entered is an Identity Matrix\n");
        else
                printf("The Matrix that you entered is Not an Identity Matrix\n");

        return 0;
}
