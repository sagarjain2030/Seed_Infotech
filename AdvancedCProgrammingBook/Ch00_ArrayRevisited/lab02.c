// Objective : To declare and Initialize array
// Problem Statement : Write a program to calculate and display the average marks of 5 subjects 
// obtained by a student where maximum marks are 100.
// Write separate functions to accept marks and calculate average.

#include<stdio.h>
#define size 5
void AcceptMarks(int* marks);
float CalculateAverage(int* marks,int * sum);
void main(void)
{
    int marks[size];
    printf("Enter marks of 5 subjects: \n");
    AcceptMarks(marks);
    int sum = 0;
    float avg = CalculateAverage(marks,&sum);
    printf("Total marks = %d\n",sum);
    printf("Average marks = %.2f\n",avg);
}

void AcceptMarks(int* marks)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&marks[i]);
    }
}

float CalculateAverage(int* marks,int * sum)
{
    for(int i = 0; i < size; i++)
    {
        *sum += marks[i];
    }
    return *sum / size;
}

// Output :
/*
Enter marks of 5 subjects: 
39
67
48
57
74  
Total marks = 285
Average marks = 57.00
*/