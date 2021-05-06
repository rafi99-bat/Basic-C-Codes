#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0,len;
    char str[100],character,substr[100][100]= {0};
    printf("Enter String\n");
    gets(str);
    printf("Enter the Character\n");
    scanf("%c",&character);
    while(str[k]!='\0')
    {
        j=0;
        while(str[k]!=' '&&str[k]!='\0')
        {
            substr[i][j]=str[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str[k]!='\0')
            k++;
    }
    len=i;
    for(i=0; i<len; i++)
    {
        int substrLen=strlen(substr[i]);
        if(substr[i][substrLen-1]==character)
            printf("%s\n",substr[i]);
    }
    return 0;
}
