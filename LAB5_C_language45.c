#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, a, b, count;
    srand(time(NULL));
    a = rand()%100;

    

    for (count = 0; a != num; count++)
    {
        printf(" \n Enter your Number :");
        scanf("%d", &num);   
        
        if (a > num)
        {
            printf("The Random Number is higher");
        }
        if (a < num)
        {
            printf("The Random Number is lower");
        }
        if (a == num)
        {
            printf("You Have Guessed it correctly the answer is %d", a);
            break;
        }
    }
    printf("\n You took %d tries", count);
}