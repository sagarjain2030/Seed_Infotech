#include<stdio.h>
int main(void)
{
    int a[5] = {11,4,12,1,5};
    int n = 5;

    printf("Before sorting: \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");  

    for(int i = 1; i < n; i++)
    {
        int small = a[i];
        for(int j = i - 1; j > -1; j--)
        {
            if(a[j] > small)
            {
                int temp = a[j];
                a[j] = small;
                a[j+1] = temp;
            }
        }
        printf("After pass number %d\n", i);
        
        for(int k = 0 ; k < n ; k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    
    printf("After sorting:\n ");
    for(int i = 0 ; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}