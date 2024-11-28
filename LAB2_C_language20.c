// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.

#include <stdio.h>

int main()
{
    int a;
    float num1 ,num2 ,x;
    printf("Enter Operation : \n [1] Addition \n [2] Substraction \n [3] Multiplication \n [4] Division \n ");
    scanf("%d", &a);
    printf("Enter 2 Operands : \n");
    scanf("%f%f", &num1, &num2);
    switch (a)
    {
    case 1:
        x = num1 + num2;
        break;
    case 2:
        x = num1 - num2;
        break;
    case 3:
        x = num1 * num2;
        break;
    case 4:
        x = num1 / num2;
        break;

    default:
        printf("Invalid Input\n");
        break;
    }
    printf("Answer = %f", x);
}