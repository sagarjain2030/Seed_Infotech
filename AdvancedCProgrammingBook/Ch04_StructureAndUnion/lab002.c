// Define a structure "Book" having members
// bookId, title and price.
// Use typedef to name this structure as Book
// Accept the data for a book and display the record
// Accet and display data of particular book using function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    int bookId;
    char title[200];
    double price;
}Book;

int readBookData(Book* b)
{
    printf("Enter details of book:\n");
    printf(" Enter name of book:");
    fgets(b->title, sizeof(b->title), stdin);
    printf("Enter the price of book:\n");
    scanf("%lf", &(b->price));
    if(b->title == NULL || b->price < 0.)
        return -1;
    return 0;
}

void printBookData(Book* b)
{
    if(b == NULL)
    {
         printf("Something went wrong while storing book data.\n");
    }
    else
    {
        printf("Book ID is : %d\n", b->bookId);
        printf("Book title is : %s", b->title);
        printf("Book price is : %.3lf\n", b->price);
    }
}

int main()
{
    Book b1;
    b1.bookId = 1001001;
    int res = readBookData(&b1);
    if(res == -1)
    {
        printf("Something went wrong while reading book data.\n");
    }
    else
    {
        printBookData(&b1);
    }
    return 0;
}