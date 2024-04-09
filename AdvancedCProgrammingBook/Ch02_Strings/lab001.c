// Write a menu driven program to perform the following operations on strings:
// 1. Compare two strings
// 2. Copy one string to another
// 3. Concatenate two strings

#include<stdio.h>
#include<string.h>
int main()
{
    char ch = ' ';
    while(ch)
    {
        printf("a. Compare Two Strings\n");
        printf("b. Copy one string to another\n");
        printf("c. Concatenate two strings\n");
        printf("Press character to perform task. Press z to break\n");
        scanf(" %c", &ch);
        switch(ch)
        {
            case 'a' :
            {
            char s1[100] ;
            char s2[100];
            printf("Enter first string : ");
            scanf("%s",s1);
            printf("Enter second string : ");
            scanf("%s",s2);
            printf("Compare Two Strings\n");
            printf("Difference between string is : ");
            int result = strcmp(s1,s2); 
            printf("%d\n", result);
            }
            break;
            case 'b' :
            {
            char s1[100];
            char s2[100];
            printf("Enter first string : ");
            scanf("%s",s1);
            printf("Enter second string : ");
            scanf("%s",s2);
            printf("Copy one string to another\n");
            printf("Copied string is : ");
            printf("%s\n",strcpy(s1,s2));
            }
            break;
            case 'c':
            {
            char s1[100];
            char s2[100];
            printf("Enter first string : ");
            scanf("%s",s1);
            printf("Enter second string : ");
            scanf("%s", s2);
            printf("Concatenate two strings\n");
            printf("Concatenated string is  : ");
            printf("%s\n",strcat(s1,s2));
            }
            break;
            case 'z':
            return 0;
            default: 
            printf("Enter correct option\n");
            break;
            
        }

    }
}
