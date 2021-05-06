#include <stdio.h>
struct Book {
        int id, price;
        char name[100];
} b[3];
int main()
{
        int i, max=3;
        for(i=0; i<max; i++)
        {
                printf("Enter book %d id\n",i+1);
                scanf("%d", &b[i].id);
                printf("Enter book %d name\n",i+1);
                scanf("%s", &b[i].name);
                printf("Enter book %d price\n",i+1);
                scanf("%d", &b[i].price);
        }

        for(i=0; i<max; i++)
        {
                printf("Book %d id=%d\n", i+1, b[i].id);
                printf("Book %d Name=%s\n", i+1, b[i].name);
                printf("Book %d Price=%d\n", i+1, b[i].price);
        }
        return 0;
}
