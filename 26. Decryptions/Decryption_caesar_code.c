#include <stdio.h>
#include <string.h>
int main()
{
//Decryption
//X-A,Y-B,Z-C,A-D,B-E,C-F... if number=1
//W-A,X-B,Y-C,Z-D,A-E,B-F... if number=2 and so on

        int i,number;
        char str[1000],str1[1000];
        printf("Enter a sentence\n");
        gets(str);
        printf("Enter the number to change alphabetical order\n");
        scanf("%d",&number);
        i=0;
        printf("Decrypted Caesar code\n\n");
        while(str[i]!='\0')
        {
                if(!((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
                {
                        if((str[i]>='a')&&(str[i]<'z'-number-1))
                                printf("%c",str[i]+number+2);
                        else if(str[i]>='A'&&str[i]<'Z'-number-1)
                                printf("%c",str[i]+number+2);
                        else
                                printf("%c",str[i]-24+number);
                }

                if(((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
                        printf("%c",str[i]);
                i++;
        }
        printf("\n");
        return 0;
}
