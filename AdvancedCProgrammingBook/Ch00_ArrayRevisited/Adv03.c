// Write a menu driven program for
// a. Deleting an element from an array.
// b. Inserting an element into array.

#include<stdio.h>
#define SIZE 10
void AcceptArray(int* arr); 
int main()
{
    int* arr[SIZE];
    printf("Insert initial %d elements for array to initialize : \n", SIZE);
    AcceptArray(arr);
    printf("Current array is : \n");
    PrintArray(arr);
    return 0;
}

void AcceptArray(int* arr)
{
    for(int i = 0; i < SIZE ; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void PrintArray(int* arr)
{
    for(int i = 0; i < SIZE ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}