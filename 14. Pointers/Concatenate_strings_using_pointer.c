#include <stdio.h>
int main()
{
        char s1[25], s2[25], *t1, *t2;
        int len1=0, len2=0, i;
        printf("Enter a string 1\n");
        scanf("%s", &s1);
        printf("Enter a string 2\n");
        scanf("%s", &s2);
        t1=s1;//copying base address of string
        t2=s2;
        while(*t1!='\0')
        {
                t1++;
                len1++;
        }
        //copying second string to first
        while(*t2!='\0')
        {
                *t1=*t2;
                t1++;
                t2++;
                len2++;
        }
        *t1='\0';
        i=0;
        //taking total string to initial base address
        while(i<len1+len2)
        {
                i++;
                t1--;
        }

        printf("Concatenated String is ");

        while(*t1!='\0')
        {
                printf("%c", *t1);
                t1++;
        }
        printf("\n");
        return 0;
}
