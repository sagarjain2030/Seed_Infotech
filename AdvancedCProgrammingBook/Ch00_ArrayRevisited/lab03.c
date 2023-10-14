// Objective  : Pass entire array to a function
// Problem Statement : Accept Five integers in an array
// and use separate function to 
// 1. Find the maximum and minimum number in the array. Do not sort the array.
// 2. Multiply each element of array by 5 and store it in new array. Display the new array.

#include<stdio.h>
#define size 5

void AcceptArray(int* arr);
void FindMaxMin(int* arr,int* max,int* min);
int* MultiplyByn(int* arr,int n);
int main(void)
{
    int arr[size];
    AcceptArray(arr);
    int max = arr[0];
    int min = arr[0];
    FindMaxMin(arr,&max,&min);
    printf("Maximum element in array is %d\n",max);
    printf("Minimum element in array is %d\n",min);
    int * new_arr = MultiplyByn(arr,5);
    return 0;
}

void AcceptArray(int *arr)
{
    printf("Enter %d integers for the array \n : ",size);
    for(int  i = 0 ;i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void FindMaxMin(int* arr,int* max, int * min)
{
    max = arr[0];
    min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > *max)
          *max = arr[i];
        if(arr[i] < *min)
          *min = arr[i];  
    }
}

int* MultiplyByn(int* arr,int n)
{
    if(n < 0)
    {
        printf("Invalid value of n. Returning original array.\n");
        return &arr;
    }
    int new_arr[size];
    for(int i = 0 ; i < size; i++)
        new_arr[i] = arr[i] * n;

    return new_arr;
}