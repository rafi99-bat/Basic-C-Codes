#include<stdio.h>
int main()
{
    int i,j,k,rows_1,col_1,rows_2,col_2,sum=0,flag=1,x,count=0,flag2=1;
    printf("Enter number of rows and columns of matrix 1\n");
    scanf("%d %d",&rows_1,&col_1);
    printf("Enter number of rows and columns of matrix 2\n");
    scanf("%d %d",&rows_2,&col_2);
    int a1[100][100],a2[100][100],mul[100][100];

    do
    {
        if(col_1==rows_2)
        {
            count++;
            if(count==1)
            {
                printf("Enter Matrix 1\n");
                for(i=0; i<rows_1; i++)
                {
                    for(j=0; j<col_1; j++)
                    {
                        printf("A1[%d][%d] = ", i+1, j+1);
                        scanf("%d", &a1[i][j]);
                    }
                }
            }

            printf("Enter Matrix 2\n");
            for(i=0; i<rows_2; i++)
            {
                for(j=0; j<col_2; j++)
                {
                    printf("A2[%d][%d] = ", i+1, j+1);
                    scanf("%d", &a2[i][j]);
                }
            }

            for(i=0; i<rows_1; i++)
            {
                for(j=0; j<col_2; j++)
                {
                    for(k=0; k<rows_2; k++)
                        sum+=a1[i][k]*a2[k][j];
                    mul[i][j]=sum;
                    sum=0;
                }
            }

            printf("Multiplication of above matrices is\n");

            for(i=0; i<rows_1; i++)
            {
                for(j=0; j<col_2; j++)
                    printf("\t%d",mul[i][j]);
                printf("\n\n");
            }
            printf("Enter 1 to continue to multiply the above to another matrix else 0\n ");
            scanf("%d",&x);
            if(x==1)
            {
                flag=1;

                for(i=0; i<rows_1; i++)
                {
                    for(j=0; j<col_1; j++)
                        a1[i][j]=0;
                }

                printf("Enter Matrix 2\n");
                for(i=0; i<rows_2; i++)
                {
                    for(j=0; j<col_2; j++)
                        a2[i][j]=0;
                }
                for(i=0; i<rows_1; i++)
                {
                    for(j=0; j<col_2; j++)
                    {
                        a1[i][j]=mul[i][j];
                        mul[i][j]=0;
                    }
                }
                rows_1=rows_1;
                col_1=col_2;
                printf("Enter rows and column of 2nd matrix\n");
                scanf("%d %d",&rows_2,&col_2);
                if(col_1!=rows_2)
                {
                    printf("Final matrix after multiplication is\n");
                    for(i=0; i<rows_1; i++)
                    {
                        for(j=0; j<col_2; j++)
                            printf("\t%d",a1[i][j]);
                        printf("\n\n");
                    }
                    flag2=0;
                }
                count++;

            }
            else
                flag=0;
        }
        else
        {
            printf("Not possible with the given rows and columns\n");
            flag=0;
        }
    }
    while(flag);
    if(count>0&&flag2!=0)
    {
        printf("Final matrix after multiplication is\n");
        for(i=0; i<rows_1; i++)
        {
            for(j=0; j<col_2; j++)
                printf("\t%d",mul[i][j]);
            printf("\n\n");
        }
    }
    return 0;
}
