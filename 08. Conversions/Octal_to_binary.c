#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *octalNum[]= {"000","001","010","011","100","101","110","111"};
    int i=0,number,j=1;
    long long int octal,temp;
    char binary[20][6];
    printf("Enter Octal number\n");
    scanf("%lld",&octal);
    temp=octal;
    while(temp!=0)
    {
        number=temp%10;
        if(number>=0 && number<=7)
        {
            strcpy(binary[i],octalNum[number]);
            temp/=10;
            i++;
        }
        else
        {
            printf("Invalid Octal Number\n");
            exit(0);
        }
    }
    printf("Binary number for given Octal number %lld is\n",octal);
    for(j=i-1; j>=0; j--)
        printf("%s",binary[j]);
    return 0;
}
