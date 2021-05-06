#include<stdio.h>
#include<string.h>
int main()
{
    int binaryNum[]= {0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111},j=0,i;
    char hexa[20]="";
    unsigned long long int binary,number,temp;
    printf("Enter Binary number\n");
    scanf("%llu",&binary);
    temp=binary;
    while(temp!=0)
    {
        number=temp%10000;
        for(i=0; i<=15; i++)
        {
            if(binaryNum[i]==number)
            {
                if(i<=9)
                    hexa[j]=(i+'0'); //i+'0' to convert integer to string
                else
                    hexa[j]=(i+55);

                j++;
            }
        }
        temp/=10000;
    }
    hexa[j]='\0';
    strrev(hexa);
    printf("Hexadecimal number for given Binary number %llu is %s\n",binary,hexa);
    return 0;
}
