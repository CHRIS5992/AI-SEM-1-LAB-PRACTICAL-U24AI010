#include <stdio.h>

int main()
{
    int a, min, temp;

    printf("Enter Number Of Elements : ");
    scanf("%d",&a);
    int b[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n Unsorted Array \n");
    for (int i = 0; i < a; i++)
    {

        printf("%d \n", b[i]);
    }
    for (int n = 0; n < a;n++)
    {
        for (int i = 0; i < a; i++)
        {

            if (b[i] < b[i - 1])
            {
                temp = b[i - 1];
                b[i - 1] = b[i];
                b[i] = temp;
            }
        }
    }
    printf(" \n sorted Array \n");
    for (int i = 0; i < a; i++)
    {

        printf("%d\n", b[i]);
    }

    return 0;
}