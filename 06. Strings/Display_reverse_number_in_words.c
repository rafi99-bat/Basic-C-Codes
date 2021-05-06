#include<stdio.h>
int main()
{
    int i,j,k=0,value,count,a[10],dummy,rev=0,x;
    char *ones[]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *temp[]= {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens[]= {"-","-","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    printf("Enter Value upto 6 digits\n");

    scanf("%d",&value);
    dummy=value;
    while(dummy>0)
    {
        x=dummy%10;
        rev=rev*10+x;
        dummy=dummy/10;
    }
    value=rev;
    while(value>0)
    {
        i=value%10;
        a[k]=i;
        k++;
        value/=10;
    }

    int totalDigits=k-1;
    if(totalDigits<6)
    {
        for(i=totalDigits; i>=0; i--)
        {
            if(i==5 && a[i]!=0)
                printf("%s lakh ",ones[a[i]]);
            if(i==4 || i==3)
            {
                if(i==4 && a[i]==0)
                {
                    printf("%s thousand ",ones[a[i-1]]);
                    i--;
                }
                else if(i==4 && a[i]==1)
                {
                    printf("%s thousand ",temp[a[i-1]]);
                    i--;
                }
                else if(i==4)
                    printf("%s ",tens[a[i]]);
                else
                    printf("%s thousand ",ones[a[i]]);
            }
            if(i==2 && a[i]!=0)
                printf("%s hundred and ",ones[a[i]]);
            if(i==2 && a[i]==0)
                printf("and ");
            if(i==1 || i==0)
            {
                if(i==1 && a[i]==0)
                {
                    printf("%s only\n",ones[a[i-1]]);
                    i--;
                    break;
                }
                if(i==1 && a[i]==1)
                {
                    printf("%s only\n",temp[a[i-1]]);
                    i--;
                    break;
                }
                if(i==1 && a[i]!=1 && a[i]!=0)
                    printf("%s ",tens[a[i]]);
                if(i==0 && a[i]!=0)
                    printf("%s only\n",ones[a[i]]);
            }
        }
    }
    else
        printf("Enter only upto 6 digits\n");
    return 0;
}
