#include <stdio.h>
void Hello();
int main(){
        int i=4;
        printf("Initial value : %d\n", i); {
                int i=5;
                printf("Inside 1st bracket : %d\n", i); {
                        int i=6;
                        printf("Inside 2nd bracket : %d\n", i);
                }
        }
        Hello();
        printf("Inside main : %d\n", i);
        return 0;
}

void Hello(){
        int i=7;
        printf("In Hello Function : %d\n", i);
}
