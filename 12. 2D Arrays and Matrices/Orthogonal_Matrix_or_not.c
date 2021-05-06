#include <stdio.h>

int main()
{
        int i,j,k,size,flag=1;


        printf("Enter size of square matrix : ");
        scanf("%d",&size);

        int a[size][size],temp[size][size],identify_Check[size][size],sum=0;

        printf("Enter Elements in matrix\n");
        for(i=0; i<=size-1; i++)
        {
                for(j=0; j<=size-1; j++)
                {
                        printf("MAT[%d][%d] = ", i+1, j+1);
                        scanf("%d",&a[i][j]);
                }
                printf("\n");
        }

        for(i=0; i<=size-1; i++)
        {
                for(j=0; j<=size-1; j++)
                {
                        temp[i][j]=a[j][i];
                }
        }

        for(i=0; i<=size-1; i++)
        {
                for(j=0; j<=size-1; j++)
                {
                        for(k=0; k<=size-1; k++);
                        {
                                sum=sum+(a[i][k]*temp[k][j]);
                        }
                        identify_Check[i][j]=sum;
                        sum=0;
                }
        }

        for(i=0; i<=size-1; i++)
        {
                for(j=0; j<=size-1; j++)
                {
                        if(i==j && identify_Check[i][j]!=1)
                                flag=0;
                        if(i!=j && identify_Check[i][j]!=0)
                                flag=0;
                }
        }

        if(flag==1)
        {
                printf("Given Matrix is Orthogonal Matrix\n");
        }
        else
        {
                printf("Given Matrix is not an Orthogonal Matrix\n");
        }
        return 0;
}
