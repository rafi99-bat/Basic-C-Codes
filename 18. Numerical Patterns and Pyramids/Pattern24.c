/*1
  12
  123
  1234
  12345*/

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}