// write all possible combination of a user entered string.

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>

int main()
{
    char* s1 = (char*)malloc(sizeof(100 * sizeof(char)));
    printf("Enter string : ");
    scanf("%s", s1);
    int stringLength = strlen(s1);
    printf("Current String is  : %s\n", s1);
    for(int i = 0; i < stringLength; i++)
    {
        if(s1[i] == 'A'|| s1[i] == 'a')
            s1[i] = 'e';
    }
    printf("New String is  : %s\n", s1);
    return 0;
}