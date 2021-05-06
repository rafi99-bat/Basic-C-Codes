/**
 * C program to print hollow mirrored parallelogram star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, M, N;

    printf("Enter rows: ");
    scanf("%d", &M);
    printf("Enter columns: ");
    scanf("%d", &N);

    for(i=1; i<=M; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=N; j++)
        {
            if(i==1 || i==M  || j==1|| j==N)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
