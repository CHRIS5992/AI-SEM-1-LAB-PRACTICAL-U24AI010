#include <stdio.h>

int main()
{
    int a, q, s, sum = 0;
    printf("Enter Your number =");
    scanf("%d", &a);
    s = a;
    while (a > 0)
    {
        q = a % 10;
        sum = sum + q * q * q;
        a = a / 10;
    }
    if (s == sum)
    {
        printf("The number %d is an amstrong number", s);
    }
    else
    {
        printf("The number %d is not an amstrong number", s);
    }
    return 0;
}