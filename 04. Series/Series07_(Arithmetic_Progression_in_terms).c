#include<stdio.h>
int main()
{
//an=a+(n-1)d
    int i,n;
    float sum=0,num1,diff,lastnum,seriesFirstNum;

    printf("Enter first number of the series\n");
    scanf("%f",&num1);
    printf("Enter Common difference\n");
    scanf("%f",&diff);
    printf("Enter number of terms in the series\n");
    scanf("%d",&n);
    seriesFirstNum=num1;
    lastnum=(float)(num1+((n-1)*diff));
    for(i=1; i<=n; i++)
    {
        sum+=seriesFirstNum;
        seriesFirstNum+=diff;
    }

    seriesFirstNum=num1;
    printf("Terms present in the Series are:\n");
    for(i=1; i<=n; i++)
    {
        if(i<n)
        {
            printf("%.2f,",seriesFirstNum);
            seriesFirstNum+=diff;
        }
        else
        {
            printf("%.2f\nSum of the Series is=%.2f\n",seriesFirstNum,sum);
            seriesFirstNum+=diff;
        }
    }
    return 0;
}
