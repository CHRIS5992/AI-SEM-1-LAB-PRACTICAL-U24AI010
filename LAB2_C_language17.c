#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter Number a,b and c : \n");
    scanf("%d%d%d", &a, &b, &c);

    max= a;
    (b>max)&&(max=b);
    (c>max)&&(max=c);
    
    printf("Max Value is =%d",max);


    return 0;
}