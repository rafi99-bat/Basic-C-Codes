#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
        int i, j, len1, len2, numstr[100], numkey[100], numcipher[100];
        char str[100], key[100], cipher[100];
        printf("Enter an Encrypted string text to Decrypt\n");
        gets(str);
        for(i=0,j=0; i<strlen(str); i++)
        {
                if(str[i]!=' ')
                {
                        str[j]=toupper(str[i]);
                        j++;
                }
        }
        str[j]='\0';
        for(i=0; i<strlen(str); i++)
                numstr[i]=str[i]-'A';
        printf("Enter key string of random text\n");
        gets(key);
        for(i=0,j=0; i<strlen(key); i++)
        {
                if(key[i]!=' ')
                {
                        key[j]=toupper(key[i]);
                        j++;
                }
        }
        key[j]='\0';
        for(i=0; i<strlen(key); i++)
                numkey[i]=key[i]-'A';

        for(i=0; i<strlen(str); i++)
        {
                numcipher[i]=numstr[i]-numkey[i];
                if(numcipher[i]<0)
                        numcipher[i]=numcipher[i]+26;
                numcipher[i]=numcipher[i]%26;
        }

        printf("Decrypted One Time Pad Cipher text is\n");
        for(i=0; i<strlen(str); i++)
                printf("%c",(numcipher[i]+'A'));
        printf("\n");
        return 0;
}
