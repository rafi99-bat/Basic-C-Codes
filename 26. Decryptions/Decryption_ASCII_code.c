#include <stdio.h>
int main()
{
        int i,n;
        printf("Enter how many numbers are there\n");
        scanf("%d",&n);
        int num[n];
        printf("Enter a NUMBERS separated with space\n");
        for(i=0; i<n; i++)
                scanf("%d",&num[i]);
        printf("Decrypted ASCII code\n");
        for(i=0; i<n; i++)
                printf("%c",num[i]);
        printf("\n");
        return 0;
}
