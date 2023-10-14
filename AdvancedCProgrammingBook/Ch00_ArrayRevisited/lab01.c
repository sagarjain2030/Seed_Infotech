// Objective : To declare and Initialize array
// Problem Statement : Write a program to calculate and display the average marks of 5 subjects 
// obtained by a student where maximum marks are 100.

#include<stdio.h>
#define size 5
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