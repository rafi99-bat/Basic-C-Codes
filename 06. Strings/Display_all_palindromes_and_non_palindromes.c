#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0,j=0,k=0,l=0;
    char str1[100]= {0},substr[100][100]= {0},substr1[100][100]= {0},substr2[100][100]= {0},rev[100];
    printf("Enter a sentence\n");
    gets(str1);
    while(str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
            k++;
    }
    int len=i;
    k=0;
    l=0;
    for(i=0; i<len; i++)
    {
        strcpy(rev,substr[i]);
        if(strcmp(strrev(rev),substr[i])==0)
        {
            strcpy(substr1[k],substr[i]);
            k++;
        }
        else
        {
            strcpy(substr2[l],substr[i]);
            l++;
        }
    }
    if(k!=0)
    {
        printf("All Palindromes present in given Sentence\n");
        for(i=0; i<k; i++)
            printf("%s\n",substr1[i]);
    }
    else
        printf("No Palindromes Found\n");
    if(l!=0)
    {
        printf("All Non Palindromes present in given Sentence\n");
        for(i=0; i<l; i++)
            printf("%s\n",substr2[i]);
    }
    else
        printf("No Non-Palindromes\n");
    return 0;
}
