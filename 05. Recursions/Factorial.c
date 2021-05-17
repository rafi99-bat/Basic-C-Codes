#include<stdio.h>
int getFact(int num)
{
    if(num==1)
        return 1;
    return num * getFact(num-1);
}

int main()
{
    int n;
    printf("Enter a number for knowing its factorial\n");
    scanf("%d",&n);
    printf("%d! = %d", n, getFact(n));
    return 0;
}
