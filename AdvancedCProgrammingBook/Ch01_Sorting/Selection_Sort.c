#include <stdio.h>
int main(void)
{
    int a[5] = {50, 70, 20, 40, 05};
    int n = 5;

    printf("Before sorting: ");
    for(int i=0;i<5;i++)
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
        
        for(int k=0;k<5;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }

    printf("After sorting: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}