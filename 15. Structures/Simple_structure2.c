#include <stdio.h>
#include <string.h>
struct Book {
        int id,price;
        char name[100];
} b1,b2;
int main()
{

        printf("Enter book 1 id\n");
        scanf("%d",&b1.id);
        printf("Enter book 1 name\n");
        scanf("%s",&b1.name);
        printf("Enter book 1 price\n");
        scanf("%d",&b1.price);

        printf("Enter book 2 id\n");
        scanf("%d",&b2.id);
        printf("Enter book 2 name\n");
        scanf("%s",&b2.name);
        printf("Enter book 2 price\n");
        scanf("%d",&b2.price);

        printf("Book 1 id=%d\n",b1.id);
        printf("Book 1 Name=%s\n",b1.name);
        printf("Book 1 Price=%d\n",b1.price);

        printf("Book 2 id=%d\n",b2.id);
        printf("Book 2 Name=%s\n",b2.name);
        printf("Book 2 Price=%d\n",b2.price);
        return 0;
}
