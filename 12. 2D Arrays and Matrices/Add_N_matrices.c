#include<stdio.h>
int main()
{
    int i,j,rows,col,flag=1,x;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    printf("Enter number of columns\n");
    scanf("%d",&col);
    int a1[rows][col],a2[rows][col],add[rows][col];

    printf("Enter Matrix 1\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A1[%d][%d] = ", i+1, j+1);
            scanf("%d", &a1[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("Enter Matrix 2\n");
        for(i=0; i<rows; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("A2[%d][%d] = ", i+1, j+1);
                scanf("%d", &a2[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<rows; i++)
        {
            for(j=0; j<col; j++)
                add[i][j]=a1[i][j]+a2[i][j];
        }

        for(i=0; i<rows; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("\t%d",add[i][j]);
            }
            printf("\n\n");
        }
        printf("Enter 1 to continue to add the above to another matrix else 0\n ");
        scanf("%d",&x);
        if(x==1)
        {
            flag=1;
            for(i=0; i<rows; i++)
            {
                for(j=0; j<col; j++)
                {
                    a1[i][j]=add[i][j];
                    add[i][j]=0;
                }
            }
        }
        else
            flag=0;
    }
    while(flag);

    printf("The final addition of matrices is\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<col; j++)
            printf("\t%d",add[i][j]);
        printf("\n\n");
    }
    return 0;
}