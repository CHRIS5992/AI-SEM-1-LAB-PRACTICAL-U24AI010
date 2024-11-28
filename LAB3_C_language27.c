#include <stdio.h>

int main()
{

    int num, i, isprime;
    printf("Enter Number:");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num == 2)
        {
            printf("Number $d is a PRIME NUMBER ", num);
            break;
        }
        if (num % i == 0)
        {
            isprime = 0; // printf("Number $d is not a PRIME NUMBER ",num);
                         // break;
        }
    }
    if (isprime)
    {
        printf("Number %d is a PRIME NUMBER ", num);
    }
    else
    {
        printf("Number $d is not a PRIME NUMBER ", num);
    }

    return 0;
}