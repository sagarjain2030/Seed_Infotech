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
    for(int i = 0; i < stringLength; i++)
    {
        int count = 0;
        int j = i;
        while(count < stringLength)
        {
            if(j == stringLength)
                j = 0;
            printf("%c",s1[j++]);
            count++;
        }
        printf("\n");
    }
    return 0;
}