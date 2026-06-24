#include <stdio.h>
#include <string.h>

struct library
{
    int id;
    char book[50];
    char author[50];
};
int main()
{
    struct library b[100];
    int n, i, ch;
    printf("Enter number of books:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter book ID:");
        scanf("%d", &b[i].id);
        printf("Enter book Name:");
        scanf("%s", b[i].book);
        printf("Enter Author name:");
        scanf("%s", b[i].author);
    }
    printf("\n----- Library Records -----\n");
    for (i = 0; i < n; i++)
    {
        printf("\n book id:%d", b[i].id);
        printf("\n book name:%s", b[i].book);
        printf("\n author name: %s\n", b[i].author);
    }
    return 0;
}
