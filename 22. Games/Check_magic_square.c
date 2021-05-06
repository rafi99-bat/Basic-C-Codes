#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,rows,col,diagonal_1=0,diagonal_2=0,m,n,k=0,sum_rows=0,sum_col=0,flag=0;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    col=rows;
    int a[rows][col];
    if(rows%2!=0)
    {
        m=0;
        n=rows-1;

        printf("Enter Magic Square Numbers Horizontally\n");

        for(i=0; i<rows; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("The given Matrix is\n");
        for(i=0; i<rows; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<rows; i++)
        {
            diagonal_1+=a[i][i];
            diagonal_2+=a[m][n];
            m++;
            n--;
        }
        printf("Sum of diagonal 1 is %d\n",diagonal_1);
        printf("Sum of diagonal 2 is %d\n",diagonal_2);
        if(diagonal_2==diagonal_1)
        {
            flag=1;
        }
        else
        {
            flag=0;
            printf("Diagonals Sum are not Equal so Not A MagicSquare\n");
            exit(0);
        }

        for(i=0; i<rows; i++)
        {
            sum_rows=0;

            for(j=0; j<col; j++)
            {
                sum_rows+=a[i][j];
            }
            printf("Sum of %d Row is %d\n",k,sum_rows);
            k++;
            if(diagonal_1==sum_rows)
            {
                flag=1;
            }
            else
            {
                flag=0;
                printf("Sum of Rows and Diagonals are not Equal,so Not A MagicSquare\n");
                exit(0);
            }
        }

        k=0;
        for(i=0; i<col; i++)
        {
            sum_col=0;
            for(j=0; j<rows; j++)
            {
                sum_col+=a[j][i];
            }
            printf("Sum of %d Column is %d\n",k,sum_col);
            k++;
            if(diagonal_1==sum_col)
            {
                flag=1;
            }
            else
            {
                flag=0;
                printf("Even Though Diagonals and Rows Sum are Equal but Sum of Columns are not Equal,so Not A MagicSquare\n");
                exit(0);
            }
        }
        if(flag==1)
            printf("Given Matrix is Magic Square\n");
    }
    else
    {
        printf("Not Possible as rows has to be Odd\n");
    }
    return(0);
}
