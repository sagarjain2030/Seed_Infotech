#include<stdio.h>
#include<string.h>

int main()
{
    char  str[100];
    int vowel_count = 0;
    printf("Enter the string : ");
    scanf("%s",str);
    int n  = strlen(str);
    char * s = str;
    for(int i = 0; i < n; i++)
    {
        if((*s) == 'a' || (*s) == 'e' || (*s) == 'i' || (*s) == 'o' || (*s) == 'u')
        {
            vowel_count++;
        }
        s++;
    }
    printf("The number of vowels in the string is %d\n", vowel_count);
    return 0;
}