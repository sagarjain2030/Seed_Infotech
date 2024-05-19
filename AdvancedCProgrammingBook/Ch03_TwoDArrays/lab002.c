// Write a program to accept the number of subjects and number of students from the user.
// Allocate memory dynamically to store the marks of the subjects of each student.
// Display the average marks of each subject and the average marks of each student.
// Free the memory when not in use

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0;
    while(n < 1)
    {
        printf("Enter number of subjects : ");
        scanf("%d", &n);
    }

    int** students;
    int m = 0;
    while(m < 1)
    {
        printf("Enter number of students : ");
        scanf("%d", &m);
    }
    students = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        students[i] = (int*)malloc(n * sizeof(int));
    }

    for(int i = 0; i < m; i++)
    {
        printf("Enter marks of student %d : \n", i + 1);
        for(int j = 0; j < n; j++)
        {
            printf("For subject %d : \n", j + 1);
            scanf("%d", &students[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        printf("Marks of student %d : \n", i + 1);
        for(int j = 0; j < n; j++)
        {
            printf("For subject %d is : %d \n", j + 1, students[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += students[i][j];
        }
        double avg = sum/n;
        printf("Average marks for student %d is %f\n",i+1,avg);
    }

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += students[j][i];
        }
        double avg = sum/m;
        printf("Average marks for subject %d is %f\n",i+1,avg);
    }

    free (students);
    return 0;
}
/*
output:
Enter number of subjects : 3
Enter number of students : 2
Enter marks of student 1 :
For subject 1 : 
96
For subject 2 :
96
For subject 3 :
96
Enter marks of student 2 :
For subject 1 : 
96
For subject 2 :
96
For subject 3 :
96
Marks of student 1 :
For subject 1 is : 96
For subject 2 is : 96
For subject 3 is : 96 
Marks of student 2 :
For subject 1 is : 96
For subject 2 is : 96
For subject 3 is : 96
Average marks for student 1 is 96.000000
Average marks for student 2 is 96.000000
Average marks for subject 1 is 96.000000
Average marks for subject 2 is 96.000000
Average marks for subject 3 is 96.000000
*/
