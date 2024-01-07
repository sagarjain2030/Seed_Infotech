// Objective : Use Pointer to pass the entire array to a function
// Problem Statement : Modify lab01  by writing separate functions to accept and display the average

#include<stdio.h>
#define size 5
float getMarks(int * marks);
float calculateAvg(int * marks);

void main(void)
{
    int marks[size];
    getMarks(marks);
    float avg = calculateAvg(marks);
    printf("Average marks = %.2f\n",avg);
}

float getMarks(int * marks)
{
    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&marks[i]);
    }
}

float calculateAvg(int * marks)
{
    int sum = 0;
    float avg = 0.;
    for(int i = 0; i < size; i++)
    {
        sum += marks[i];
    }
    avg = sum / size;
    return avg;
}

/*
Output : 
Enter marks of 5 subjects: 
39
67
48
57
74
Average marks = 57.00
*/