#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        int i,j,temp,num,decimal,inc;
        printf("Enter number of binary sets\n");
        scanf("%d",&num);
        int binary[num];
        printf("Enter a binary Code separated with Space\n");
        for(i=0; i<num; i++)
                scanf("%d",&binary[i]);

        printf("Decrypted Binary code\n");
        for(j=0; j<num; j++)
        {
                temp=binary[j];
                inc=0;
                decimal=0;
                while(temp!=0)
                {
                        i=temp%10;
                        decimal=decimal+(i*pow(2,inc));
                        temp=temp/10;
                        inc++;
                }
                printf("%c",decimal);
        }
        printf("\n");
        return 0;
}
