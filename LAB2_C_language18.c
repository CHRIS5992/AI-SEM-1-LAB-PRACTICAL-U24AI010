// PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :)
//OPERATOR.

#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter Number a,b and c : \n");
    scanf("%d%d%d", &a, &b, &c);
    max = a ;
    max = (b>a) ? b:a ;
    max = (c>b) ? c:b ;

    printf("Max Value = %d" , max);



    return 0;
}