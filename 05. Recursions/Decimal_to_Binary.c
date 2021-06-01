#include<stdio.h>

long convertBinary(int dec)
{
    static long bin, r, fctor = 1;

    if(dec != 0)
    {
         r = dec % 2;
         bin = bin + r * fctor;
         fctor = fctor * 10;
         convertBinary(dec / 2);
    }
    return bin;
}

int main()
{
    long bin;
    int dec;

    printf(" Input any decimal number : ");
    scanf("%d",&dec);

    bin = convertBinary(dec);
    printf(" The Binary value of decimal no. %d is : %ld", dec, bin);
    return 0;
}
