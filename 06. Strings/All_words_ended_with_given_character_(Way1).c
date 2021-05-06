#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,start=0;
    char str[100],character;
    printf("Enter String\n");
    gets(str);
    printf("Enter the Character\n");
    scanf("%c",&character);
    for(i=0; i<=strlen(str); i++)
    {
        if((str[i]==' ' && str[i-1]==character)||(str[i]=='\0' && str[i-1]==character))
        {
            for(j=start; j<i; j++)
            {
                printf("%c",str[j]);
            }
            printf("\n");
            start=i+1;
        }
        else
        {
            if(str[i]==' ')
                start=i+1;
        }
    }
    return 0;
}
