// Write a program that defines a float array and accepts elements from user.
// Interchange these elements at all consecutive even and odd positions.
// Display the original array and modified array. 
// So here 1st element will be swapped with 2nd element, 3rd element will be swapped with 4th element and so on.

#include<stdio.h>
#define SIZE 10
void AcceptArray(float* arr);
void PrintArray(float* arr);
void Interchange(float* arr);
int main()
{
    float myArray[SIZE];
    printf("Enter %d float numbers for the array : \n",SIZE);
    AcceptArray(myArray);
    printf("The array you have provided is : \n");
    PrintArray(myArray);
    printf("After interchanging array will be : \n");
    Interchange(myArray);
    PrintArray(myArray);
    return 0;
}

void AcceptArray(float* arr)
{
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%f  ",&arr[i]);
    }
}

void PrintArray(float* arr)
{
    for(int i = 0; i < SIZE; i++ )
    {
        printf("%.2f  ", arr[i]);
    }
    printf("\n");
}

void Interchange(float* arr)
{
    for(int i = 0; i < SIZE; i++)
    {
        float temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
    }
}

/*
OUTPUT : 
Enter 10 float numbers for the array : 
1.2
3.5
4.6
7.8
8.1
9.4
8.9
5.1
4.7
3.9
2.7
The array you have provided is : 
1.20  3.50  4.60  7.80  8.10  9.40  8.90  5.10  4.70  3.90
After interchanging array will be :
3.50  1.20  7.80  4.60  9.40  8.10  5.10  8.90  3.90  4.70
*/