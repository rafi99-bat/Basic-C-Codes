#include <stdio.h>
int main()
{
        int i,j,rows,col,sum_rows,sum_col,k=0;
        printf("Enter number of rows and columns of a matrix\n");
        scanf("%d %d",&rows,&col);
        int a[rows][col];

        printf("Enter Matrix \n");
        for(i=0; i<rows; i++)
        {
                for(j=0; j<col; j++)
                {
                        printf("MAT[%d][%d] = ", i+1, j+1)
                        scanf("%d",&a[i][j]);
                }
                printf("\n");
        }

        printf("Given matrix is\n");
        for(i=0; i<rows; i++)
        {
                for(j=0; j<col; j++)
                {
                        printf("%d\t",a[i][j]);
                }

                printf("\n");
        }
        k=0;
        i=0;
        FirstLoop:
        {
                if(i<col)
                {
                        sum_col=0;
                        j=0;
                        SecondLoop:
                        {
                                if(j<rows)
                                {
                                        sum_col+=a[j][i];
                                        j++;
                                        goto SecondLoop;
                                }
                        }
                        printf("Sum of %d Column is %d\n",k,sum_col);
                        k++;
                        i++;
                        goto FirstLoop;
                }
        }
        return 0;
}
