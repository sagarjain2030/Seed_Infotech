// Objective  : Pass entire array to a function
// Problem Statement : Accept Five integers in an array
// and use separate function to 
// 1. Find the maximum and minimum number in the array. Do not sort the array.
// 2. Multiply each element of array by 5 and store it in new array. Display the new array.

#include<stdio.h>
#define size 5

void AcceptArray(int* arr);
void PrintArray(int* arr);
void FindMaxMin(int* arr,int* max,int* min);
void MultiplyByn(int* arr,int sizeArray, int n, int* newArr);
int main(void)
{
    int arr[size];
    AcceptArray(arr);
    PrintArray(arr);
    int max = arr[size - 1];
    int min = arr[size - 1];
    FindMaxMin(arr,&max,&min);
    printf("Maximum element in array is %d\n",max);
    printf("Minimum element in array is %d\n",min);
    int new_arr[size]; 
    MultiplyByn(arr,size,5,new_arr);
    PrintArray(new_arr);
    return 0;
}

void AcceptArray(int *arr)
{
    printf("Enter %d integers for the array  : \n",size);
    for(int  i = 0 ;i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void PrintArray(int *arr)
{
    printf("The array is : ");
    for(int i = 0 ; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void FindMaxMin(int* arr,int* max, int* min)
{
    *max = arr[0];
    *min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

void MultiplyByn(int* arr,int sizeArray, int n, int* newArr)
{
    if(n < 0)
    {
        printf("Invalid value of n. Returning original array.\n");
        for(int i= 0 ; i < sizeArray; i++)
            newArr[i] = arr[i];
    }
    else
    {
        for(int i= 0 ; i < sizeArray; i++)
            newArr[i] = arr[i] * n;
    }
}

// Output :
/*
Enter 5 integers for the array  : 
39
67
48
57
74
The array is : 39 67 48 57 74 
Maximum element in array is 74
Minimum element in array is 39
The array is : 195 335 240 285 370
*/