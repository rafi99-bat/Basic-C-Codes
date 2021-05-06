/*1
  2 3
  4 5 6 7
  8 9 1 2 3 4 5 6
  7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4*/

#include <stdio.h>

int main()
{
    int i, j, N, colCount, value;

    colCount = 1;
    value = 1;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=colCount; j++)
        {
            if(value == 10)
                value = 1;

            printf("%d ", value);

            value++;
        }

        printf("\n");

        colCount *= 2;
    }

    return 0;
}
