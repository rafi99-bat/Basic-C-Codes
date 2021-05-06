#include <stdio.h>
#define Add +
#define Subtract -
#define Multiply *
#define Divide /
int main()
{
        int a,b,add,sub,mul;
        float div;
        printf("Enter a, b for all operations\n");
        scanf("%d%d",&a,&b);
        add=a Add b;
        printf("Addition of %d+%d=%d\n",a,b,add);
        sub=a Subtract b;
        printf("Subtraction of %d-%d=%d\n",a,b,sub);
        mul=a Multiply b;
        printf("Multiply of %dx%d=%d\n",a,b,mul);
        if(b>0)
        {
                div=((float)a/b);
                printf("Division of %d/%d=%f\n",a,b,div);
        }
        else
                printf("Division is Not Possible\n");
        return 0;
}
