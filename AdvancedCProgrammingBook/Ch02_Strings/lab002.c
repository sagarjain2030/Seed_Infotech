// Return if string is palindrome or not

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>

bool isPalindrome(char* str)
{
    int pt1 = 0;
    int pt2 = strlen(str)-1;
    for(int i = 0; i <= strlen(str)/2; i++)
    {
        if(str[pt1] != str[pt2])
            return false;
        pt1++;
        pt2--;
    }
    return true;
}

int main()
{
    char* s1 = (char*)malloc(sizeof(100 * sizeof(char)));
    printf("Enter string : ");
    scanf("%s", s1);
    if(isPalindrome(s1))
        printf("is Palindrome.\n");
    else
        printf("is not Palindrome.\n");
    return 0;
}