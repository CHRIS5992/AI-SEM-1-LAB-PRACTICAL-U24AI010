#include <stdio.h>

int main()
{
    int lines = 5;  // Number of lines

    for (int i = 1; i <= lines; i++)
    {
        // Print characters starting from 'A'
        for (int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
