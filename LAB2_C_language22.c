#include <stdio.h>

int main()
{
    int a, n, f;
    printf("Enter Number :");
    scanf("%d", &a);
    n = a-1;
    while (n > 0)
    {
        a = a * n;
        n = n - 1;
        
    }
    printf("Factorial of number = %d", a);
    return 0;
}