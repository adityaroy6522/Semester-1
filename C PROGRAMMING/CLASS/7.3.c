#include <stdio.h>
#include <string.h>

struct Book
{
    int book_id;
    char title[100];
    char author_name[100];
    float price;
};

void print_book_details(struct Book b)
{
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author_name);
    printf("Price: $%.2f\n", b.price);
}

int main(void)
{
    struct Book my_book;
    
    printf("Enter the Book ID: ");
    scanf("%d", &my_book.book_id);
    
    printf("Enter the Book Title (no spaces): ");
    scanf("%s", my_book.title);
    
    printf("Enter the Author's Name (no spaces): ");
    scanf("%s", my_book.author_name);
    
    printf("Enter the Book Price: ");
    scanf("%f", &my_book.price);
    
    print_book_details(my_book);
    
    return 0;
}