// Define a structure "Book" having members
// bookId, title and price.
// Use typedef to name this structure as Book
// Accept the data for a book and display the record

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    int bookId;
    char title[200];
    double price;
}Book;


int main()
{
    Book b1;
    b1.bookId = 1001001;
    printf("Enter details of book:\n");
    printf(" Enter name of book:");
    fgets(b1.title, sizeof(b1.title), stdin);
    printf("Enter the price of book:\n");
    scanf("%lf", &(b1.price));
    printf("Book ID is : %d\n", b1.bookId);
    printf("Book title is : %s", b1.title);
    printf("Book price is : %lf\n", b1.price);
    return 0;
}