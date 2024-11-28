#include <stdio.h>
void amstrong(int num);
int main(){
    int num;
    printf("Enter a number:  ");
    scanf("%d",&num);
    amstrong(num);

    return 0;
}

void amstrong( int num )
{
    int a,q,sum=0,flag;
    a=num;

    while ( a!=0)
    {
        q=a%10;
        sum=sum+q*q*q;
        a=a/10;

    }

    if (num == sum)
    {
        printf("Number %d is a amstrong number ",num);
    }
    else 
    {
        printf("Number %d is not a amstrong number ",num);
    }
}