#include<stdio.h>
#include<math.h>
int factorial(int);
int main()
{
//cos x = 1 - x 2 / 2! + x 4 / 4! - x 6 / 6! + ...
    int accuracy,count=0,k=0;
    float x,temp,cosine=0;

    printf("Enter value x(in degrees) to find cos x value\n");
    scanf("%f",&x);
    temp=x;
    x=(float)x*(3.14159/180);
    printf("Enter value to get more accurate\n 3 for least and more for more accuracy\n");
    scanf("%d",&accuracy);

    do
    {
        if(count%2==0)
            cosine=(float)cosine+(pow(x,k)/factorial(k));
        if(count%2==1)
            cosine=(float)cosine-(pow(x,k)/factorial(k));
        count++;
        k=k+2;
    }
    while(count<=accuracy);

    printf("cos(%f)=%f calcualted mathematically\n",temp,cosine);
    printf("cos(%f)=%f calculated using library function\n",temp,cos(x));
    return 0;
}

int factorial(int val)
{
    int factorial=1,i;
    for(i=1; i<=val; i++)
        factorial=factorial*i;
    return(factorial);
}
