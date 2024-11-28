#include <stdio.h>

int main()
{
    int p, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%d", &rate);

    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    simpleInterest = (p * rate * time) / 100;

    printf("Simple Interest = %d", simpleInterest);

    return 0;
}