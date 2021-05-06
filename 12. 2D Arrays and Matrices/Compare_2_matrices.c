#include<stdio.h>
int main()
{
    int i,j,rows_1,col_1,rows_2,col_2,flag=1;
    printf("Enter number of rows and columns of matrix 1\n");
    scanf("%d %d",&rows_1,&col_1);
    printf("Enter number of rows and columns of matrix 2\n");
    scanf("%d %d",&rows_2,&col_2);

    int a1[rows_1][col_1],a2[rows_2][col_2];

    if(rows_1==rows_2 && col_1==col_2)
    {
        printf("Enter Matrix 1\n");
        for(i=0; i<rows_1; i++)
        {
            for(j=0; j<col_1; j++)
            {
                printf("A1[%d][%d] = ", i+1, j+1);
                scanf("%d", &a1[i][j]);
            }
            printf("\n");
        }
        printf("Enter Matrix 2\n");
        for(i=0; i<rows_2; i++)
        {
            for(j=0; j<col_2; j++)
            {
                printf("A2[%d][%d] = ", i+1, j+1);
                scanf("%d", &a2[i][j]);
            }
            printf("\n");
        }

        printf("Matrix 1  is\n");
        for(i=0; i<rows_1; i++)
        {
            for(j=0; j<col_1; j++)
                printf("\t%d",a1[i][j]);
            printf("\n\n");
        }

        printf("Matrix 2  is\n");
        for(i=0; i<rows_2; i++)
        {
            for(j=0; j<col_2; j++)
                printf("\t%d",a2[i][j]);
            printf("\n\n");
        }

        for(i=0; i<rows_1; i++)
        {
            for(j=0; j<col_1; j++)
            {
                if(a1[i][j]!=a2[i][j])
                    flag=0;
            }
        }

        if(flag==1)
            printf("Both matrices are equal\n");
        else
            printf("Both matrices are not equal\n");
    }
    else
        printf("Matrices Can not be compared\n");
    return 0;
}
