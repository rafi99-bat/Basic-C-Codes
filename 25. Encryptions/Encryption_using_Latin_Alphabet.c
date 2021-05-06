#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
//In this A-1,B-2....Z-26
//a-1,b-2,...z-26
        int i;
        char str[1000];
        printf("Enter a sentence\n");
        gets(str);
        i=0;
        while(str[i]!='\0')
        {
                if((str[i]>=0&&str[i]<=31)||(str[i]>=33&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127))
                {
                        printf("Enter only alphabets and space\n");
                        exit(0);
                }
                i++;
        }
        i=0;
        printf("Encrypted Code using Latin Alphabet\n");
        while(str[i]!='\0')
        {
                if(!((str[i]>=0&&str[i]<=31)||(str[i]>=33&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
                {
                        if(str[i]>='A'&&str[i]<='Z')
                                printf("%d ",str[i]-'A'+1);
                        if(str[i]>='a'&&str[i]<='z')
                                printf("%d ",str[i]-'a'+1);
                }

                if(str[i]==' ')
                        printf("%c",str[i]);
                i++;
        }
        printf("\n");
        return 0;
}
