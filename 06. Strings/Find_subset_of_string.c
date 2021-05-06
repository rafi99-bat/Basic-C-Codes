#include<stdio.h>
#include<string.h>
#include<math.h>
char *GetBinary(int dec);
int main()
{
    int i,j,len,count=0,noofzeros;
    char str[20],temp[20],binary[20];
    printf("Enter a string\n");
    gets(str);
    len=strlen(str);
    printf("Subsets of Given String are");
    for(i=0; i<(pow(2,len)); i++)
    {
        strcpy(binary,GetBinary(i));
        noofzeros=len-strlen(binary);

        for(j=0; j<len; j++)
        {
            if(j>=noofzeros)
            {
                if(binary[j-noofzeros]!='0')
                    printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

char *GetBinary(int dec)
{
    int temp,i,j=1,k=0;
    char binary[20];
    temp=dec;
    while(temp!=0)
    {
        i=temp%2;
        binary[k]=i+'0';
        temp=temp/2;
        j=j*10;
        k++;
    }
    binary[k]='\0';
    return strrev(binary);
}
