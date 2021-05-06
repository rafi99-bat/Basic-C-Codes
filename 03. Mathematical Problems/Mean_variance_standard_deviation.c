#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    float mean,sum=0.0,sumMeanSquare=0.0,variance,sd;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    float a[n],subtractMeanSquare[n];
    printf("Enter Numbers\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    mean=(float)(sum/n);
    printf("Mean for given numbers is %f\n",mean);
    for(i=0; i<n; i++)
    {
        subtractMeanSquare[i]=(a[i]-mean)*(a[i]-mean);
        sumMeanSquare+=subtractMeanSquare[i];
    }
    variance=(float)(sumMeanSquare/n);
    sd=(float)(sqrt(variance));
    printf("Variance =%f\n",variance);
    printf("Sandard Deviation=%f\n",sd);
    return 0;
}
