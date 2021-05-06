#include<stdio.h>
int main()
{
    char choice;
    printf("Enter\na)Currency Conversion\nb)Length Conversion\nc)Speed Conversion\n");
    scanf("%c",&choice);
    switch(choice)
    {
    case 'a':
    {
        int currencyChoice;
        printf("Enter\n1)Taka to Dollar\n2)Dollar to Taka\n3)Taka to Euro\n4)Euro to Taka\n");
        scanf("%d",&currencyChoice);
        switch(currencyChoice)
        {
        case 1:
        {
            float taka,dollar;
            printf("Enter Amount in Bangladeshi Taka\n");
            scanf("%f",&taka);
            dollar=(taka*0.012);
            printf("%.2f TK=%f $\n",taka,dollar);
            break;
        }
        case 2:
        {
            float taka,dollar;
            printf("Enter Amount in USD\n");
            scanf("%f",&dollar);
            taka=(dollar*84.72);
            printf("%.2f $=%f TK\n",dollar,taka);
            break;
        }
        case 3:
        {
            float taka,euro;
            printf("Enter Amount in Bangladeshi Taka\n");
            scanf("%f",&taka);
            euro=(float)(taka*0.0098);
            printf("%.2f TK=%f EUR\n",taka,euro);
            break;
        }
        case 4:
        {
            float taka,euro;
            printf("Enter Amount in Euro\n");
            scanf("%f",&euro);
            taka=(float)(euro*102.49);
            printf("%.2f EUR=%f TK\n",euro,taka);
            break;
        }
        default:
            printf("Enter Valid Currency Choice\n");
        }
        break;
    }
    case 'b':
    {
        int lengthConversion;
        printf("Enter\n1)m to cm\n2)cm to m\n3)km to m\n4)m to km\n");
        scanf("%d",&lengthConversion);
        switch(lengthConversion)
        {
        case 1:
        {
            float m;
            printf("Enter meters\n");
            scanf("%f",&m);
            printf("%.3f m=%.2f cm\n",m,(m*100));
            break;
        }
        case 2:
        {
            float cm;
            printf("Enter Centi meters\n");
            scanf("%f",&cm);
            printf("%.3f cm=%.2f m\n",cm,(cm*0.01));
            break;
        }
        case 3:
        {
            float km;
            printf("Enter Kilo meters\n");
            scanf("%f",&km);
            printf("%.3f km=%.2f m\n",km,(km*1000));
            break;
        }
        case 4:
        {
            float m;
            printf("Enter meters\n");
            scanf("%f",&m);
            printf("%.3f m=%.2f km\n",m,(m*0.001));
            break;
        }
        default:
            printf("Enter Valid Meter Conversion Choice\n");
        }
        break;
    }
    case 'c':
    {
        int speedChoice;
        printf("Enter\n1)m/s to km/s\n2)km/s to m/s\n3)km/h to m/s\n4)m/s to km/h");
        scanf("%d",&speedChoice);
        switch(speedChoice)
        {
        case 1:
        {
            float ms;
            printf("Enter m/s\n");
            scanf("%f",&ms);
            printf("%f m/s = %f km/s\n",ms,(ms*0.001));
            break;
        }
        case 2:
        {
            float kms;
            printf("Enter km/s\n");
            scanf("%f",&kms);
            printf("%f km/s = %f m/s\n",kms,(kms*1000));
            break;
        }
        case 3:
        {
            float kmh;
            printf("Enter km/h\n");
            scanf("%f",&kmh);
            printf("%f km/h = %f m/s\n",kmh,(kmh*0.277777778));
            break;
        }
        case 4:
        {
            float ms;
            printf("Enter m/s\n");
            scanf("%f",&ms);
            printf("%f m/s = %f km/h\n",ms,(ms*3.6));
            break;
        }
        default:
            printf("Enter Valid Speed Conversion Choice\n");
            break;
        }
        break;
    }
    default:
    {
        printf("Enter valid Choice\n");
        break;
    }
    }
    return 0;
}
