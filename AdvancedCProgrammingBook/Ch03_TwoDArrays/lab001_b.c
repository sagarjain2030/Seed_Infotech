// Write a program that calculates the average marks of all the subjects. 
// The number of subjects 'n' is accepted from the user. The marks of 'n' subjects are also accepted from the user. 
// Use dynamic memory allocation to allocate memory for the marks array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int* subjects;
    int n;
    printf("Enter the number of subjects\n");
    scanf("%d", &n);
    subjects = (int*)malloc(n * (sizeof(int)));
    for(int i = 0; i < n; i++)
    {
        printf("Enter the marks of subject %d\n", i + 1);
        scanf("%d", subjects[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += subjects[i]; 
    }
    printf("The average marks of all the subjects is %f\n", (float)sum / n);
    free(subjects);
    return 0;
}