/*13579
  3579
  579
  79
  9*/

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = (i * 2) - 1;

        for(j=i; j<=N; j++, k+=2)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
