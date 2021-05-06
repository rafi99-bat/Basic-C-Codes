#include <stdio.h>
#include <string.h>
struct Book {
        int id, price;
        char name[100];
};
int main()
{

        struct Book b;
        printf("Enter book id\n");
        scanf("%d", &b.id);
        printf("Enter book name\n");
        scanf("%s", &b.name);
        printf("Enter book price\n");
        scanf("%d", &b.price);

        printf("Book id = %d\n", b.id);
        printf("Book Name = %s\n", b.name);
        printf("Book Price = %d\n", b.price);
        return 0;
}
