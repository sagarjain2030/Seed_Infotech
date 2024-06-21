// Write a program to ask the user the type of elements he wants to enter.
// For example, int, char or float. 
// Then ask him how many elements he wants to enter.
// Depending on the data type and number of elements he wants to enter,
// a. allocate the space
// b. accept elements
// c. display elements

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
        if(ch == '\n')
            ch = getchar();
        mat1[i] = ch;
    }
    printf("Elements inserted are: \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Element %d : %c\n",i + 1,mat1[i]);
    }
    int option = 0;
    printf("do wou want to enter more elements : \n Enter 1 for Yes, 0 for No");
    scanf("%d", &option);
}

void GetDecimalData()
{
    int numElements = 0;
    printf("Enter number of elements of type float you want to enter : \n");
    scanf("%d", &numElements);
    double* mat1 = (double *)malloc(sizeof(double) * numElements);
    for(int i = 0; i < numElements; i++)
    {
        mat1[i] = 0.;
    }
    printf("Elements to be inserted : \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%lf",&mat1[i]);
    }
    printf("Elements inserted are: \n");
    for(int i = 0; i < numElements; i++)
    {
        printf("Element %d : %.3lf\n",i + 1,mat1[i]);
    }
    int option = 0;
    printf("do wou want to enter more elements : \n Enter 1 for Yes, 0 for No : ");
    scanf("%d", &option);
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
        GetDecimalData();
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