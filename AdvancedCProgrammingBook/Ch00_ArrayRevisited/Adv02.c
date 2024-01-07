// Write a program to evaluate the expression z = x^2 + y^2, where x and y are two arrays.
// Each array holds 10 user entered elements. Store this result in another array called z.
// Display all the three arrays.

#include<stdio.h>
#include<math.h>
#define SIZE 10
void AcceptArray(int* arr);
void PrintArray(int* arr);
void CalculateArrayz(int *x, int *y, int *z);
int main()
{
    int x[SIZE], y[SIZE], z[SIZE];
    printf("Enter %d elements for array x : \n", SIZE);
    AcceptArray(x);
    printf("Enter %d elements for array y : \n", SIZE);
    AcceptArray(y);
    CalculateArrayz(x,y,z);
    printf("You have entered x array as : \n");
    PrintArray(x);
    printf("And You have entered y array as : \n");
    PrintArray(y);
    printf("And the z array => z = x^2 + y^2 is \n");
    PrintArray(z);
    return 0;
}

void AcceptArray(int* arr)
{
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void PrintArray(int* arr)
{
    for(int i = 0; i < SIZE; i++ )
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void CalculateArrayz(int *x, int *y, int *z)
{
    for(int i = 0; i < SIZE; i++)
    {
        z[i] = pow(x[i],2) + pow(y[i],2);
    }
}

/*
OUTPUT : 
Enter 10 elements for array x : 
1
2
3
4
5
6
7
8
9
10
Enter 10 elements for array y : 
11
22
33
44
55
66
77
88
99
00
You have entered x array as : 
1  2  3  4  5  6  7  8  9  10
And You have entered y array as :
11  22  33  44  55  66  77  88  99  0
And the z array => z = x^2 + y^2 is
122  488  1098  1952  3050  4392  5978  7808  9882  100
*/