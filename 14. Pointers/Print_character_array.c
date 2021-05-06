#include <stdio.h>
int main()
{
        int i, max=5;
        char *names[]={"Hello","World","Happy","New","Year"};
        printf("Names are\n");
        for(i=0; i<max; i++)
                printf("%s\n",*(names+i));
        return 0;
}
