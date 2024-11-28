#include <stdio.h>

int main()
{

    int lines = 5;

    for (int i = 1; i <= lines; i++)
    {

        for (int a = lines-i; a>0; a--)
        {
            printf(" ");
            
        }
        for (int b = 1; b <= i; b++)
        {
            printf("%d", b);
        }
        

        printf("\n");
    }

    return 0;
}
