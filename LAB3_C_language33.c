#include <stdio.h>

int main()
{
    int a, num, max = 0, min = 0;
    printf("Enter Number of Entries= \n");
    scanf("%d", &a);

    printf("Enter a number= \n");
    scanf("%d", &num);

    max = num;
    min = num;

    for (int i = 1; i<a; i++)
    {
        printf("Enter a number= \n");
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
        
    }
    printf("Maximum is = %d \nMinimum is = %d", max, min);

    return 0;
}