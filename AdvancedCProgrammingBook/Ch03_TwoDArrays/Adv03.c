// Write a program to replace all the hard coded elements in upper triangle
// of 4 * 4 matrix above diagonal, by zero

#include<stdio.h>
int main()
{
    int mat[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    printf("given matrix is: \n");
    for(int i = 0; i < 4; i++)
    {
        printf("%dth row is :  ", i+1);
        for(int j = 0; j < 4; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i < j)
                mat[i][j] = 0;
        }
    }

    printf("now the matrix is: \n");
    for(int i = 0; i < 4; i++)
    {
        printf("%dth row is :  ", i+1);
        for(int j = 0; j < 4; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}