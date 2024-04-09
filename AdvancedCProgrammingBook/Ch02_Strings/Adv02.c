// accepts 2 strings as arguments and concatenate second string with first string.

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("Number of arguments given are wrong. Please provide valid arguments\n");
        return 0;
    }

    char* s1 = argv[1];
    char* s2 = argv[2];
    strcat(s2,s1);
    printf("The concatenated string is : %s", s1);
    return 0;
}