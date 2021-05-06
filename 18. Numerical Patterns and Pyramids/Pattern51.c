/*1
  3  2
  4  5  6
  10 9  8  7
  11 12 13 14 15*/

#include <stdio.h>

int main()
{
    int i, j, count, value, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    count = 0;

    for(i=1; i<=N; i++)
    {
        value = (i & 1) ? (count + 1) : (count + i);

        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            if(i & 1)
                value++;
            else
                value--;

            count++;
        }

        printf("\n");
    }

    return 0;
}
