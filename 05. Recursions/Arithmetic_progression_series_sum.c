#include<stdio.h>
int seriesSum(int a,int b,int d)
{
    if(a<=b)
        return a + seriesSum(a+d,b,d);
    return 0;
}

int main()
{
    int a, b, d;

    printf("Enter first number, last number and term difference\n");
    scanf("%d%d%d", &a, &b, &d);

    printf("Sum: %d", seriesSum(a,b,d));
    return 0;
}
