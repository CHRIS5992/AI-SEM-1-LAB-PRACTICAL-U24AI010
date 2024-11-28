#include <stdio.h>

int main(){
    int a ,s,revnum=0,remainder;
    printf("Enter Your Number=");
    scanf("%d",&a);
    s=a;
    while(a!=0)
    {
        remainder = a%10;
        revnum= (revnum*10)+remainder;
        a=a/10;
    }
    printf("Original number was %d \n Reversed number is %d",s,revnum);
    return 0;
}