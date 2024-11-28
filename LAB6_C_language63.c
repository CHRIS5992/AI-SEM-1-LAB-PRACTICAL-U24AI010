#include <stdio.h>

int main()
{

    int arr[3][3], i = 0, j = 0;

    printf("Enter Values Of ARRAY :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j][i]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[j][i] > max)
            {
                max = arr[j][i];
            }
            if (arr[j][i] < min)
            {
                min = arr[j][i];
            }
        }
    }
    printf("MAXIMUM IS %d \n MINIMUM IS %d ", max, min);
    return 0;
}