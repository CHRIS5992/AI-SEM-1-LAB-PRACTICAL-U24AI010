#include <stdio.h>

int main(){
    int base,exponent,d,n;
    printf("Enter Base : \n");
    scanf("%d",&base);
    printf("Enter Exponent : \n",exponent);
    scanf("%d",&exponent);
    d=1;

    do
    {
     d=d*base;
     exponent=exponent-1;
    }while(exponent>0);  
    printf("The Power is : %d",d);
    return 0;
    
}