#include <stdio.h>

int main(){
    int a,sum=0,remainder;
    printf("Enter Your Number =");
    scanf("%d",&a);
    while(a!=0)
    {
      remainder=a%10;
      sum=sum+remainder;
      a=a/10;
    }
    printf("Sum of digits of number is %d",sum);

    return 0;
}