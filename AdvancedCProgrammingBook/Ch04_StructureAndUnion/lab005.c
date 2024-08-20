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
    printf("Category : 1.MAGAZINE\n 2.NOVELS\n 3.ENCYCLOPEDIA\n 4.COOKING\n 5.OTHERS: \nEnter your option:");
    scanf("%d", &Category_option);
    switch (Category_option)
    {
    case 1:
        b->category_name = MAGAZINE;
        break;
    case 2:
        b->category_name = NOVELS;
        break;
    case 3:
        b->category_name = ENCYCLOPEDIA;
        break;   
    default:
        b->category_name = OTHERS;
    }
    while (getchar() != '\n');

    printf("Enter the name of the publisher: ");
    fgets(b->pub.pubName, sizeof(b->pub.pubName), stdin);
    len = strlen(b->pub.pubName);
    if (len > 0 && b->pub.pubName[len-1] == '\n') 
    {
        b->pub.pubName[len-1] = '\0';
    }

    printf("Enter the address of the publisher: ");
    fgets(b->pub.pubAddress, sizeof(b->pub.pubAddress), stdin);
    len = strlen(b->pub.pubAddress);
    if (len > 0 && b->pub.pubAddress[len-1] == '\n') 
    {
        b->pub.pubAddress[len-1] = '\0';
    }
    return 0;
}

char* getCategory(int category)
{
    char Category[20];
    switch (category)
    {
    case 1:
        return "MAGAZINE";
    case 2:
        return "NOVELS";
    case 3:
        return "ENCYCLOPEDIA";
    default:
        return "OTHERS";
    }
    
    return "";
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
        printf("Book type is : %s\n",getCategory(b->category_name));
        printf("Book pubishing house is : %s ", b->pub.pubName);
        printf("And it's address is : %s", b->pub.pubAddress);
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
    }

   return 0;
}