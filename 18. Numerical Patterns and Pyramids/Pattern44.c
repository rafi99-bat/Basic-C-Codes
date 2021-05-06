/*1
  3 2
  4 5 4 3
  5 6 7 6 5 4
  6 7 8 9 8 7 6 5*/

#include <stdio.h>

int main()
{
    int i, j, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        value = i + 1;
        for(j=3; j<=i; j++)
        {
            printf("%d ", value);
            value++;
        }

        for(j=(i*2)-1; j>=i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
