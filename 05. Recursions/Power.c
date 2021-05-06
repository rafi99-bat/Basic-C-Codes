#include<stdio.h>
int power(int base, int exp)
{
    if(exp==0)
        return 1;
    else
        return base * power(base, exp-1);
}

int main()
{
    int b, n;
    printf("Enter the base and exponential:\n");
    scanf("%d%d", &b, &n);

    printf("Result: %d", power(b,n));
    return 0;
}
