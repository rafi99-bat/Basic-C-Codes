#include <stdio.h>
int main()
{
        int a;
        printf("Enter a\n");
        scanf("%d", &a);

        printf("%d*2=%d \n", a, a<<1);
        printf("%d/2=%d \n", a, a>>1);
        return 0;
}
