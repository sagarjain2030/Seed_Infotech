// Modify assignment 2 to hold
// records of 5 books. Display the records
// all the books using a function

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
    printf("Enter name of book: ");
    fgets(b->title, sizeof(b->title), stdin);
    // Remove newline character from title if it exists
    size_t len = strlen(b->title);
    if (len > 0 && b->title[len-1] == '\n') {
        b->title[len-1] = '\0';
    }
    printf("Enter the price of book: ");
    if (scanf("%lf", &(b->price)) != 1 || b->price < 0.0) {
        return -1;
    }
    getchar(); // consume newline character left by scanf
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
        printf("Book title is : %s\n", b->title);
        printf("Book price is : %.3lf\n", b->price);
    }
}

int main()
{
    Book b_array [5];
    for(int i = 0; i < 5; i++)
    {
        b_array[i].bookId =   1000+i;
        int res = readBookData(&(b_array[i]));
        if(res == -1)
        {
            printf("Something went wrong while reading book data.\n");
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printBookData(&(b_array[i]));
    }
    return 0;
}