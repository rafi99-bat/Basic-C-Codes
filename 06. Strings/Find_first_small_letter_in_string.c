#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char str[100];
    printf("Enter String to get First Small Letter of String\n");
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>'a' && str[i]<'z')
        {
            printf("The First Small Letter is %c\n",str[i]);
            flag=1;
            break;
        }
    }
    if(flag!=1)
        printf("There is no small letter\n");
    return 0;
}
