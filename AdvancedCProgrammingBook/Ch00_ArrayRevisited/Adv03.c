// Write a menu driven program for
// a. Deleting an element from an array.
// b. Inserting an element into array.

#include<stdio.h>
#include<stdbool.h>
#define SIZE 10
void PrintArray(int * arr);
void AcceptArray(int* arr); 
int main()
{
    int arr[SIZE];
    printf("Insert initial %d elements for array to initialize : \n", SIZE);
    AcceptArray(arr);
    printf("Current array is : \n");
    PrintArray(arr);
    int index = 0;
    bool breakLoop = false;
    while(breakLoop == false)
    {
        printf("Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : ");
        char ch;
        scanf("%c", &ch);
        switch(ch)
        {
            case 'I':
            case 'i':
            {
                printf("Enter the index between 0 to 9 for inserting element : ");
                scanf("%d", &index );
                if(index < 0 || index > 9)
                    printf("Enter correct index\n");
                else
                {
                    int number;
                    printf("enter number to insert : ");
                    scanf("%d",&number);
                    arr[index] = number;
                    PrintArray(arr);
                }
                break;
            }
            case 'D':
            case 'd':
            {
                printf("Enter the index between 0 to 9 for deleting element : ");
                scanf("%d", &index );
                if(index < 0 || index > 9)
                    printf("Enter correct index\n");
                else
                {
                    int number = arr[index];
                    printf("number deleted  is: %d\n", number);
                    arr[index] = 0;
                    PrintArray(arr);
                }
                break;
            }
            case 'B':
            case 'b':
            {
                breakLoop = true;
                break;
            }
            default:
                 printf("Enter correct option please \n");
        }        
    }
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

/*
Insert initial 10 elements for array to initialize : 
78
89
65
96
63
32
21
14
45
56
Current array is :
78 89 65 96 63 32 21 14 45 56 
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : Enter correct option please 
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : i
Enter the index between 0 to 9 for inserting element : 4
enter number to insert : 55
78 89 65 96 55 32 21 14 45 56
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : Enter correct option please 
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : d
Enter the index between 0 to 9 for deleting element : 7
number deleted  is: 14
78 89 65 96 55 32 21 0 45 56
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : Enter correct option please 
Enter I/i for insert and D/d for deletion of element from given array. Press B/b to break : b

*/