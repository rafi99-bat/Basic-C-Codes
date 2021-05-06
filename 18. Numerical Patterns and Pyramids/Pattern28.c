/*5
  54
  543
  5432
  54321*/

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
