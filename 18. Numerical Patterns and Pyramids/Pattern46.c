/*1
  21
  123
  4321
  12345*/

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        if(i & 1)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d", j);
            }
        }
        else
        {
            for(j=i; j>=1; j--)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}
