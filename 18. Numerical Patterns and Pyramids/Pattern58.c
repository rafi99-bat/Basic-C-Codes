/*
  *
  *1*
  *121*
  *12321*
  *1234321*
  *123454321*
  *1234321*
  *12321*
  *121*
  *1*
  *
  */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    printf("*\n");
    for(i=1; i<=N; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }

    for(i=N-1; i>=1; i--)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");

    return 0;
}