// Objective : Use Pointer to pass the entire array to a function
// Problem Statement : Modify lab01  by writing separate functions to accept and display the average

#include<stdio.h>
#define size 5
float average_marks(int * marks, int size);
void main(void)
{
    int marks[size];
    int sum = 0;
    float avg = 0.;
    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    avg = sum / size;
    printf("Total marks = %d\n",sum);
    printf("Average marks = %.2f\n",avg);
}
