#include <stdio.h>
int main()
{
        int a;
        printf("Enter a number to find whether it is odd or even\n");
        scanf("%d", &a);
        if((a & 1) == 1)
                printf("Odd\n");
        else
                printf("Even\n");
        return 0;
}
