// Define an enumerated type "Catgory"
// It should have values like MAGAZINE,NOVELS,ENCLYPEDEA,COOKING etc
// Also declare a structure "publisher" that has pubName and pubAddress
// as members. Modify the structure "book" to include variables of type
// category and publisher. Perform following operations
// 1. Accept the data for book
// 2. Display the data of the book
// Category should be displayed as string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum 
{
    MAGAZINE,
    NOVELS,
    ENCYCLOPEDIA,
    COOKING,
    OTHERS
}Category;

typedef struct 
{
    char pubName[100];
    char pubAddress[500];
}publisher;
 
typedef struct 
{
    int bookId;
    char title[200];
    double price;
    Category category_name;
    publisher pub;
}Book;

int readBookData(Book* b)
{
    b->bookId = rand();
    printf("Enter details of book:\n");
    printf(" Enter name of book:");
    fgets(b->title, sizeof(b->title), stdin);
    size_t len = strlen(b->title);
    if (len > 0 && b->title[len-1] == '\n') 
    {
        b->title[len-1] = '\0';
    }
    printf("Enter the price of book:\n");
    scanf("%lf", &(b->price));
    if(b->title == NULL || b->price < 0.)
        return -1;
    int Category_option = -1;
    printf("What is type of book.Please enter number for category:\n");
    printf("Category : 1.MAGAZINE\n 2.NOVELS\n 3.ENCYCLOPEDIA\n 4.COOKING\n 5.OTHERS ");
    scanf("%d", &Category_option);
    switch (Category_option)
    {
    case 1:
        category_name = MAGAZINE;
        break;
    
    default:
        }
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
    int res = readBookData(&b1);
    if(res == -1)
    {
        printf("Something went wrong while reading book data.\n");
    }
    else
    {
        printBookData(&b1);
        b2.bookId = b1.bookId + 1;
        strcpy(b2.title,b1.title);
        b2.price = b1.price;
        printf("b2 book data is :\n");
        printBookData(&b2);
        b3 = b1;
        printf("b3 book data is :\n");
        printBookData(&b3);
    }

   return 0;
}