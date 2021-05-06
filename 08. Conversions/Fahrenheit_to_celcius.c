#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter Fahrenheit to convert to celsius\n");
    scanf("%f",&fahrenheit);
    celsius=(float)((fahrenheit-32)/1.8);

    printf("%.2f fahrenheit in celsius is %.2f\n",fahrenheit,celsius);
    return 0;
}
