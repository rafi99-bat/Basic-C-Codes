#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,flag;
    char s1[100],s2[100];
    printf("Enter String to check whether both are Anagrams or not\n");
    gets(s1);
    printf("Enter String 2\n");
    gets(s2);
    for(i=0; i<strlen(s1); i++)
    {
        flag=0;
        for(j=0; j<strlen(s2); j++)
        {
            if(tolower(s1[i])==tolower(s2[j]))
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("Both %s and %s are Not Anagrams\n",s1,s2);
            exit(0);
        }

    }
    printf("Both %s and %s are Anagrams\n",s1,s2);
    return 0;
}
