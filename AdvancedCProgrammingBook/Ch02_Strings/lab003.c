// return character pointer for given c

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>

char* xStrChr(char* str, char ch)
{
    char* ptr = NULL;
    ptr = str;
    while(ptr != NULL)
    {
        if(*ptr == ch)
            return ptr;
    }

    return NULL;
}

int main()
{
    char* s1 = (char*)malloc(sizeof(100 * sizeof(char)));
    printf("Enter string : ");
    scanf("%s", s1);
    char ch;
    printf("Enter character to search : ");
    scanf("%c", ch);
    char* currPtr = xStrChr(s1, ch);
    if(currPtr)
        printf("character is found\n");
    else
        printf("character is not found\n");
    return 0;
}