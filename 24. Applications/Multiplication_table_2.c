#include <stdio.h>
int main()
{
        int i, n, j=0, k=1, end;
        printf("Enter a number for which you want table\n");
        scanf("%d", &n);
        printf("Enter a number till where \nyou want multiplication with %d\n",n);
        scanf("%d", &end);
        while(k<=end)
        {
                i=n;
                j=j+i;
                printf("%d x %d = %d\n",i,k,j);
                k++;
        }
        return 0;
}
