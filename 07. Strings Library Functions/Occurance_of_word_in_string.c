#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,sublen,count=0;
    char str[100],substr[20],tempstr[20];
    printf("Enter String\n");
    gets(str);
    printf("Enter substring to find Occurances\n");
    gets(substr);
    len=strlen(str);
    sublen=strlen(substr);
    if(len>=sublen)
    {
        for(i=0; i<len; i++)
        {
            strncpy(tempstr,str+i,sublen);
            tempstr[sublen]='\0';
            if(strcmp(substr,tempstr)==0)
                count++;
        }
        printf("Given Substring Occured %d times\n",count);
    }
    else
        printf("Entered SubString is More then given String\n");
    return 0;
}
