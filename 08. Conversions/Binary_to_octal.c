#include<stdio.h>
int main()
{
    int octalNum[]= {0,1,10,11,100,101,110,111};
    long int binary,i,number,temp,octal=0,j=1;
    printf("Enter Binary number\n");
    scanf("%ld",&binary);
    temp=binary;
    while(temp!=0)
    {
        number=temp%1000;
        for(i=0; i<=7; i++)
        {
            if(octalNum[i]==number)
            {
                octal=octal+(i*j);
            }
        }
        j*=10;
        temp/=1000;
    }
    printf("Octal number for given Binary number %ld is %ld\n",binary,octal);
    return 0;
}
