/*54321
  5432
  543
  54
  5*/

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
