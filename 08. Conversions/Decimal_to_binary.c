#include <stdio.h>

int dec_to_bin(int n)
{
        int i, j=1, ret=0;
        while(n!=0)
        {
                i=n%2;
                ret=ret+(i*j);
                n/=2;
                j=j*10;
        }
        return ret;
}

int main()
{
        int dec,temp,i,j=1,binary=0;
        printf("Enter a numer to convert to binary number\n");
        scanf("%d",&dec);
        //temp=dec;
        /*while(temp!=0)
           {
            i=temp%2;
            binary=binary+(i*j);
            temp=temp/2;
            j=j*10;
           }*/
        printf("Binary number of %d is %d\n",dec,/*binary*/ dec_to_bin(dec));
        return 0;
}
