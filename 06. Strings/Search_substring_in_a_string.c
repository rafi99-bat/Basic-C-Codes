#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=0,len1,len2;
    char str[100],substr[100];
    printf("Enter a string\n");
    gets(str);
    printf("Enter a substring to be searched\n");
    gets(substr);
    len1=strlen(str);
    len2=strlen(substr);

    for(i=0; i<=len1-len2; i++)
    {
        for(j=i; j<i+len2; j++)
        {
            flag=1;
            if(str[j]!=substr[j-i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("Search is Successful\n");
    else
        printf("Search is not Successful\n");
    return 0;
}
