#include <stdio.h>
int main()
{
        char s1[25],s2[25],*t1,*t2;
        int cmp=0;
        printf("Enter a string 1\n");
        scanf("%s",&s1);
        printf("Enter a string 2\n");
        scanf("%s",&s2);
        t1=s1;
        t2=s2;
        while(*t1!='\0'&&*t2!='\0')
        {
                if(*t1!=*t2)
                        cmp++;
                t1++;
                t2++;
        }

        if(cmp==0)
                printf("Both are equal\n");
        else
                printf("Both are not equal\n");
        return 0;
}
