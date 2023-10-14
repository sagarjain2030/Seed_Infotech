#include <stdio.h>
#define size 5
int main(void)
{
    int a[size] = {50, 70, 20, 40, 05};
    int n = size;
    printf("Selection Sort\n");
    printf("Before sorting: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");  

    for(int i = 0; i <= n-1; i++)
    {
        int small_number_index = i;
        int small_number = a[i];

        for (int j = i + 1; j <= n-1; j++)
        {
            if(small_number > a[j])
            {
                small_number = a[j];
                small_number_index = j;
            }
        }

        if(small_number_index != i)
        {
            int temp = a[i];
            a[i] = a[small_number_index];
            a[small_number_index] = temp;
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
Selection Sort
Before sorting: 50 70 20 40 5 
After pass number 0
5 70 20 40 50
After pass number 1
5 20 70 40 50 
After pass number 2
5 20 40 70 50
After pass number 3
5 20 40 50 70
After pass number 4
5 20 40 50 70
After sorting: 5 20 40 50 70 
*/