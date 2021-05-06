#include<stdio.h>
#include<string.h>
int main()
{
    int i,vowel=0,consonant=0,special=0,letters=0,digits=0;
    char str[100];
    printf("Enter string 1\n");
    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
            vowel++;

        else if(str[i]>=0 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=127)
            special++;

        else if(str[i]>'0' && str[i]<'9')
            digits++;
    }
    printf("vowel count=%d\n",vowel);
    printf("consonant count=%d\n",strlen(str)-vowel-special-digits);
    printf("digits count=%d\n",digits);
    printf("Special Characters=%d\n",special);
    return 0;
}
