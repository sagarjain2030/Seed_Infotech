// Write a program to ask the user the type of elements he wants to enter.
// For example, int, char or float. 
// Then ask him how many elements he wants to enter.
// Depending on the data type and number of elements he wants to enter,
// a. allocate the space
// b. accept elements
// c. display elements
// after entering the elements if the use wants to enter more data, reallocate the space
// to accept more elements and display them.
// Free the allocated space if the user does not want to enter more elements.

#include<stdio.h>
#include<stdlib.h>

void GetIntegerData()
{
    int numElements = 0;
    printf("Enter number of elements of type integer you want to enter : \n");
    scanf("%d", &numElements);
    int* mat1 = (int *)malloc(sizeof(int) * numElements);
    for(int i = 0; i < numElements; i++)
    {
        mat1[i] = 0;
    }
    printf("Elements to be inserted : \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d",&mat1[i]);
    }
    printf("Elements inserted are: \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Element %d : %d\n",i + 1,mat1[i]);
    }
}

void GetCharData()
{
    int numElements = 0;
    printf("Enter number of elements of type character you want to enter : \n");
    scanf("%d", &numElements);
    char* mat1 = (char *)malloc(sizeof(char) * numElements);
    for(int i = 0; i < numElements; i++)
    {
        mat1[i] = '.';
    }
    printf("Elements to be inserted : \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Enter element %d : ", i + 1);
        char ch = getchar();
        mat1[i] = ch;
    }
    printf("Elements inserted are: \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Element %d : %c\n",i + 1,mat1[i]);
    }
}

int getOption()
{
    int option = 0;
    do
    {
        printf("Enter type of elements you want to enter : \n");
        printf("For int => Enter 1\nFor char => Enter 2\nFor float => Enter 3\n");
        scanf("%d", &option);
        printf("option given is : %d\n", option);
    }while(option != 1 && option != 2 && option != 3);
    printf("So you want to enter element of type ");
    switch (option)
    {
    case 1:
        printf("Integer\n");
        GetIntegerData();
        break;    
    case 2:
        printf("Character\n");
        GetCharData();
        break;    
    case 3:
        printf("Decimal\n");
        break;    
    
    default:
        break;
    }

    return option;
}

int main()
{
    int option = getOption();

    return 0;
}