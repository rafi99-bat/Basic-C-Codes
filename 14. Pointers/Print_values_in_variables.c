#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        int i,*j,**k;
        i=45;
        j=&i;
        k=&j;
        printf("Values in variables\n");
        printf(" Value in i %d\n", i);
        printf(" Value in j which is the address of i %d\n", j);
        printf(" Value in k which is the address of j %d\n", k);
//Lets see what is the real address of i,j,k
        printf("Addresses\n");
        printf(" Address of i which is value in j %u\n", &i);
        printf(" Address of j which is the value in k %u\n", &j);
        printf(" Address of k %u\n", &k);

//printing using pointer
        printf("Using Pointers\n");
        printf(" Value in i %d\n", *(&i));
        printf(" Value in i %d\n", *j);
        printf(" Value in i %d\n", **k);
        printf(" Value in j %d\n", *(&j));
        printf(" Value in j %d\n", *k);
        printf(" Value in k %d\n", *(&k));
        return 0;
}
