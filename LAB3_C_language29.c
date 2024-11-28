#include <stdio.h>

int main(){
    int remainder,revnum=0,s,a;
    printf("Enter Your Number = ");
    scanf("%d",&a);
    s=a;
    while(a!=0)
    {
        remainder=a%10;
        revnum= revnum*10+remainder;
        a=a/10;
    }
    if(revnum==s)
    {
        printf("The Number %d Is A Pallindrome",s);
    
    }
    else
    {
        printf("The Number %d Is Not A Pallindrome",s);

    }
    return 0;
}