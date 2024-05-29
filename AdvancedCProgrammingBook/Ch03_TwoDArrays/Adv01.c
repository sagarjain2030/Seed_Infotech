// Write a program to print multiplication of a 3 * 3 matrix.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int** mat1 = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++)
    {
        mat1[i] = (int*)malloc(3 * sizeof(int));
    }

    printf("Enter elements of matrix 1 : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d element of row %d : ",j+1,i+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    int** mat2 = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++)
    {
        mat2[i] = (int*)malloc(3 * sizeof(int));
    }

    printf("Enter elements of matrix 2 : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d element of row %d : ",j+1,i+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    int** result = (int**)malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++)
    {
        result[i] = (int*)malloc(3 * sizeof(int));
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix is : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
    {
        free(mat1[i]);
        free(mat2[i]);
        free(result[i]);
    }

    free (mat1);
    free (mat2);
    free (result);
    return 0;
}
/*
output:
Enter elements of matrix 1 : 
1 element of row 1 : 1
2 element of row 1 : 1
3 element of row 1 : 1
1 element of row 2 : 1
2 element of row 2 : 1
3 element of row 2 : 1
1 element of row 3 : 1
2 element of row 3 : 1
3 element of row 3 : 1
Enter elements of matrix 2 :
1 element of row 1 : 1
2 element of row 1 : 1
3 element of row 1 : 1
1 element of row 2 : 1
2 element of row 2 : 1
3 element of row 2 : 1
1 element of row 3 : 1
2 element of row 3 : 1
3 element of row 3 : 1
Resultant matrix is :
3 3 3
3 3 3
3 3 3
*/
