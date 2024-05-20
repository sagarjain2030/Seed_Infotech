// Write a program that accepts the number of students from the user.
// Allocate memory dynamically to store the name of each student entered by user.
// Search a name of student in the list and display appropriate message "Found" or "Not Found"
// Use function to perform searching.
// Free the memory when not in use

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int isFound(char** students, int n, char* name)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(students[i], name) == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int n = 0;
    while(n < 1)
    {
        printf("Enter number of students : ");
        scanf("%d", &n);
    }

    char** students;
    students = (char**)malloc(n * sizeof(char*));
    for(int i = 0; i < n; i++)
    {
        students[i] = (char*)malloc(100 * sizeof(char));
    }

    for(int i = 0; i < n; i++)
    {
        printf("Enter name of student %d : \n", i + 1);
        scanf("%s", students[i]);
    }

    int breakLoop = 1;
    while(breakLoop)
    {
        char name[100];
        printf("Enter name to search : ");
        scanf("%s", name);

        if(isFound(students, n, name))
            printf("Found\n");
        else
            printf("Not Found\n");
        printf("Do you want to search another name? (1/0) : ");
        scanf("%d", &breakLoop);
    }

    free (students);
    return 0;
}
/*
output:
Enter number of students : 3
Enter name of student 1 :
Sagar
Enter name of student 2 :
Divyani
Enter name of student 3 :
Kunjan
Enter name to search : Pradip
Not Found
Do you want to search another name? (1/0) : 1
Not Found
Do you want to search another name? (1/0) : 0
PS C:\Users\sagar\Documents\My_Study\Github\Seed_Infotech\AdvancedCProgrammingBook\Ch03_TwoDArrays> gcc .\lab003.c
PS C:\Users\sagar\Documents\My_Study\Github\Seed_Infotech\AdvancedCProgrammingBook\Ch03_TwoDArrays> .\a.exe
Enter number of students : 3
Enter name of student 1 :
Sagar
Enter name of student 2 :
Divyani
Enter name of student 3 :
Kunjan
Enter name to search : Pratik
Not Found
Do you want to search another name? (1/0) : 1
Enter name to search : Divyani
Found
Do you want to search another name? (1/0) : 0
*/
