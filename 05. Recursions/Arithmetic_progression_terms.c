#include<stdio.h>
int seriesSum(int a,int n,int d)
{
    if(n==0)
        return 0;
    return a + seriesSum(a+d,n-1,d);
}

int main()
{
    int a, n, d;

    printf("Ender the first number, number of terms and term difference:\n");
    scanf("%d%d%d", &a, &n, &d);

    printf("Sum: %d", seriesSum(a,n,d));
    return 0;
}
