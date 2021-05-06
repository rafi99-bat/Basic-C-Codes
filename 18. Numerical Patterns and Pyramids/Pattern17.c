/*12345
  21234
  32123
  43212
  54321*/

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=i; j>1; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<= (N-i +1); j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
