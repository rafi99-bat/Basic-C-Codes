#include <stdio.h>
#include <string.h>
int main()
{
        int i,temp,x,y=1,binary=0;
        char str[1000];
        printf("Enter a sentence\n");
        gets(str);
        i=0;
        printf("Encrypted ASCII code\n");
        while(str[i]!='\0')
        {
                printf("%d ",str[i]);
                i++;
        }
        printf("\n");
        return 0;
}
