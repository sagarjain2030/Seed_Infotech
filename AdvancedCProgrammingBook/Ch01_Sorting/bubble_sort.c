#include <stdio.h>
#define size 5
int main(void)
{
    printf("Bubble Sort\n");
    int a[size] = {11,04,12,07,05};
    int n = size;

    printf("Before sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        printf("After pass number %d\n", i);
        for(int k=0;k<size;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    
    printf("After sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


// Output:
/*
Bubble Sort
Before sorting: 11 4 12 7 5
After pass number 0
4 11 7 5 12
After pass number 1
4 7 5 11 12
After pass number 2
4 5 7 11 12
After pass number 3
4 5 7 11 12
After sorting: 4 5 7 11 12
*/