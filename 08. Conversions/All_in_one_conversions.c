#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void Menu();
int ConvertFromBinarytoOther(int,int);
int ConvertFromDecimalToOther(int,int);
char *ConvertFromDecimalToHexa(int,int);
int ConvertFromOctaltoDecimal(int);
int ConvertFromHexatoDecimal(char *);
int main()
{
    int choice;
    do
    {
        Menu();
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        case 2:
        {
            int final,num,binary,decimal;
            char str[10];
            printf("Enter Binary Number\n");
            scanf("%d",&binary);
            if(choice==1)
            {
                strcpy(str,"Decimal");
                final=ConvertFromBinarytoOther(binary,2);
            }
            if(choice==2)
            {
                strcpy(str,"Octal");
                decimal=ConvertFromBinarytoOther(binary,2);//Converting binary to decimal
                final=ConvertFromDecimalToOther(decimal,8);//Converting decimal to octal
                //So binary to Octal
            }
            printf("%s number of Binary number %d is %d\n",str,binary,final);
            break;
        }
        case 3:
        {
            char final[20];
            int num,binary,decimal;
            printf("Enter Binary Number\n");
            scanf("%d",&binary);
            decimal=ConvertFromBinarytoOther(binary,2);//Converting binary to decimal
            strcpy(final,ConvertFromDecimalToHexa(decimal,16));//Converting Decimal to Hexa
            printf("HexaDecimal for given Binary %d is %s\n",binary,final);
            break;
        }
        case 4:
        {
            int octal,decimal,binary;
            printf("Enter Octal Number\n");
            scanf("%d",&octal);
            decimal=ConvertFromOctaltoDecimal(octal);
            binary=ConvertFromDecimalToOther(decimal,2);
            printf("Binary Number for given Octal Number %d is %d\n",octal,binary);
            break;
        }
        case 5:
        {
            int octal,decimal;
            printf("Enter Octal Number\n");
            scanf("%d",&octal);
            decimal=ConvertFromOctaltoDecimal(octal);
            printf("Decimal for given Octal Number %d is %d\n",octal,decimal);
            break;
        }
        case 6:
        {
            int octal,decimal;
            char hexa[20];
            printf("Enter Octal Number\n");
            scanf("%d",&octal);
            decimal=ConvertFromOctaltoDecimal(octal);
            strcpy(hexa,ConvertFromDecimalToHexa(decimal,16));
            printf("Binary Number for given Octal Number %d is %s\n",octal,hexa);
            break;
        }
        case 7:
        case 8:
        {
            int decimal,num,final;
            char str[10];
            printf("Enter Decimal\n");
            scanf("%d",&decimal);
            if(choice==7)
            {
                num=2;
                strcpy(str,"Binary");
            }
            if(choice==8)
            {
                num=8;
                strcpy(str,"Octal");
            }
            final=ConvertFromDecimalToOther(decimal,num);
            printf("%s number of Decimal %d is %d\n",str,decimal,final);
            break;
        }
        case 9:
        {
            int decimal,num;
            char str[10],final[20];
            printf("Enter Decimal\n");
            scanf("%d",&decimal);
            strcpy(final,ConvertFromDecimalToHexa(decimal,16));
            printf("Hexadecimal for %d is %s\n",decimal,final);
            break;
        }
        case 10:
        {
            char hexa[20];
            int decimal,binary;
            printf("Enter HexaDecimal\n");
            scanf("%s",hexa);
            decimal=ConvertFromHexatoDecimal(hexa);
            binary=ConvertFromDecimalToOther(decimal,2);
            printf("Binary for given HexaDecimal %s is %d\n",hexa,binary);
            break;
        }
        case 11:
        {
            char hexa[20];
            int decimal,octal;
            printf("Enter HexaDecimal\n");
            scanf("%s",hexa);
            decimal=ConvertFromHexatoDecimal(hexa);
            octal=ConvertFromDecimalToOther(decimal,8);
            printf("Binary for given HexaDecimal %s is %d\n",hexa,octal);
            break;
        }
        case 12:
        {
            char hexa[20];
            int decimal;
            printf("Enter HexaDecimal\n");
            scanf("%s",hexa);
            decimal=ConvertFromHexatoDecimal(hexa);
            printf("Decimal for given HexaDecimal %s is %d\n",hexa,decimal);
            break;
        }
        }
    }
    while(choice<=12 && choice>=1);
    return(0);
}
void Menu()
{
    char *str[]= {"binary to decimal","binary to octal","binary to hexadecimal",
                  "octal to binary","octal to decimal","octal to hexadecimal",
                  "decimal to binary","decimal to octal","decimal to hexadecimal",
                  "hexadecimal to binary","hexadecimal to octal","hexadecimal to decimal","\0"
                 };
    int i=0;
    printf("Enter\n");
    while(str[i]!="\0")
    {
        printf("%2d - %s\n",i+1,str[i]);
        i++;
    }
}
int ConvertFromDecimalToOther(int decimal,int num)
{
    int temp,i,j=1,final=0;
    temp=decimal;
    while(temp!=0)
    {
        i=temp%num;
        final=final+(i*j);
        temp=temp/num;
        j=j*10;
    }
    return(final);
}

char *ConvertFromDecimalToHexa(int decimal,int num)
{
    int temp,i,k=0;
    char final[20];
    temp=decimal;
    while(temp!=0)
    {
        i=temp%num;
        if(i>9)
        {
            final[k]=i+55;
            k++;
        }
        else
        {
            final[k]=(i+'0');//To convert from integer to character add (number+'0')
            k++;
        }
        temp=temp/num;
    }
    final[k]='\0';
    return(strrev(final));
}

int ConvertFromBinarytoOther(int binary,int num)
{
    int final=0,i,inc=0,temp;
    temp=binary;
    while(temp!=0)
    {
        i=temp%10;
        final= final + (i * pow(num,inc));
        temp=temp/10;
        inc++;
    }
    return(final);
}

int ConvertFromOctaltoDecimal(int octal)
{
    int dec=0,temp,i,inc=0;
    temp=octal;
    while(temp!=0)
    {
        i=temp%10;
        dec=dec+(i*pow(8,inc));
        temp=temp/10;
        inc++;
    }
    return(dec);
}

int ConvertFromHexatoDecimal(char *hexa)
{
    int dec=0,i=0,j,len,num;
    len=strlen(hexa);
    for(j=0; j<len; j++)
        hexa[j]=toupper(hexa[j]);
    while(len>0)
    {
        if(hexa[i]>='A'&&hexa[i]<='F')
        {
            num=hexa[i]-'A'+10;
            dec=dec+(num*pow(16,(len-1)));
        }
        else
        {
            num=hexa[i]-'0';
            dec=dec+(num*pow(16,(len-1)));
        }
        i++;
        len--;
    }
    return(dec);
}
