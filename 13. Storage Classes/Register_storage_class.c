#include <stdio.h>
int main(){
        register int i;
        int j;
        for(i=1; i<10; i++) {
                for(j=i; j<10; j++)
                        printf("%d", j);
                printf("\n");
        }
        return 0;
}
