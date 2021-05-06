/**
1/1!+ 2/2!+ 3/3!+ 4/4!+....+ n/n!
*/
#include<stdio.h>
int factorial(int);
int main()
{
    int i,n;
    float sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
        sum+=(float)i/factorial(i);
    printf("The value of\n");
    for(i=1; i<=n; i++)
    {
        if(i<n)
            printf("%d/%d!+ ",i,i);
        else
            printf("%d/%d!= ",i,i);
    }
    printf("%f\n",sum);
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=1; i<=num; i++)
        fact=fact*i;
    return fact;
}
