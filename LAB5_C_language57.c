#include <stdio.h>

int main()
{

    int r, val, max, min;
    printf("Enter number of Elements in Array : ");
    scanf("%d", &r);
    printf("Enter Values:");
    int a[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d", &val);

        a[i] = val;
    }

    for (int m = 0; m < r; m++)
    {
        printf(" \n %d",a[m]);

        
    }
    max=a[0];
    min = max;
    for (int n = 0; n < r; n++)
    {
    

        if (a[n] > max)
        {
            max=a[n];
        }
        if (a[n] < max)
        {
            min = a[n];
        }
    }
    printf("\n MAX = %d , MIN = %d",max,min);
    return 0;
}