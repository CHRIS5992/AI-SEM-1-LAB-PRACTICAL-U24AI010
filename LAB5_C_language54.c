#include <stdio.h>

int main(){
    
    int a[10],b,c=0,sum=0;
    printf("Enter Values :");
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&b);
        a[i]=b;
        sum = sum + a[i];

    }
    printf("SUM OF NUMBERS IS : %d",sum);
    

    return 0;
}