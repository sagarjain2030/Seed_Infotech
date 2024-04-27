// Write a program to accept and display 3 * 3 matrix. Write accept() and display() functions to perform the task.
// 1. Find the transpose of the matrix and print the transposte using display function
// 2. Accept another matrix of same dimension. Find the addition of two matrices and print the resultant matrix

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void accept(int **ptr)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
}

void display(int **ptr)
{
    for(int i = 0;i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ",ptr[i][j]);
        }
        printf("\n");
    }
}

// void transpose(int **ptr)
// {
//     printf("The transpose of the matrix is\n");
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             int temp = ptr[i][j];
//             ptr[i][j] = ptr[j][i];
//             ptr[j][i] = temp;
//         }
//     }
//     printf("The transpose of the matrix is\n");
//     display(ptr);
// }

void transpose(int **ptr)
{
    printf("The transpose of the matrix is\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++) // Start from i + 1 to avoid swapping elements twice
        {
            int temp = ptr[i][j];
            ptr[i][j] = ptr[j][i];
            ptr[j][i] = temp;
        }
    }
    display(ptr); // Display the transposed matrix after all swaps are done
}


int** sum_matrix(int** ptr1, int** ptr2)
{
    int** result;
    result = (int**)malloc(3 * sizeof(int*));
    for(int i =0; i < 3; i++)
    {
        result[i] = (int*)malloc(3 * sizeof(int));
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result[i][j] = ptr1[i][j] + ptr2[i][j];
        }
    }
    return result;
}

int main()
{
    int** ptr;
    int i,j;
    ptr = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++ )
    {
        ptr[i] = (int*)malloc(3 * sizeof(int));
    }
    printf("Enter the elements of 3x3 matrix\n");
    accept(ptr);
    printf("The matrix is\n");
    display(ptr);
    transpose(ptr);
    display(ptr);
    int **ptr2;
    ptr2 = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++ )
    {
        ptr2[i] = (int*)malloc(3 * sizeof(int));
    }
    printf("Enter new matrix\n");
    accept(ptr2);
    display(ptr2);
    int** result = sum_matrix(ptr, ptr2);
    display(result);
    free(result);
    free(ptr);
    free(ptr2);
    return 0;
}
