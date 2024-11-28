#include <stdio.h>

int main(){
    int num,a,x;
    printf("Enter Number :\n");
    scanf("%d",&num);
    a=num ;
    while(a>0)
    {
     x=a*num;
     printf(" %d x %d = %d \n",num,a,x);
     a=a-1;
    }
    return 0;
}