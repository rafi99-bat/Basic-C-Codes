#include <stdio.h>
int main()
{
        int i, n;
        printf("Enter how many numbers are there including spaces\n");
        scanf("%d",&n);
        int decrypt[n];
        printf("Enter numbers separated by space and if space is there in between words enter -1\n");
        for(i=0; i<n; i++)
                scanf("%d",&decrypt[i]);
        printf("Decrypted Code using Latin Alphabet\n");
        for(i=0; i<n; i++)
        {
                if(decrypt[i]!=-1)
                        printf("%c",decrypt[i]+'A'-1);
                else
                        printf(" ");
        }
        printf("\n");
        return 0;
}
