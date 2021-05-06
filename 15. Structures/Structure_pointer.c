#include <stdio.h>
#include <string.h>
struct Book {
        int id,price;
        char name[100];
} b, *b1;
int main()
{
        b1=&b;
        printf("Enter book id\n");
        scanf("%d",&b.id);
        printf("Enter book name\n");
        scanf("%s",&b.name);
        printf("Enter book price\n");
        scanf("%d",&b.price);

        printf("Book id=%d\n",b1->id);
        printf("Book Name=%s\n",b1->name);
        printf("Book Price=%d\n",b1->price);
        return 0;
}
