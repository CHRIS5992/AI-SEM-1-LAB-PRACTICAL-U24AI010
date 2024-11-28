#include <stdio.h>

int main(){
    int n,i,sumeven=0,sumodd=0;
    printf("Enter Your Number N :\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+i;
        }
        else if(i%2==1)
        {
            sumodd=sumodd+i;
        }
    }
    printf("Sum of even numbers from 1 to %d = %d\n",n,sumeven);
    printf("Sum of odd numbers from 1 to %d = %d\n",n,sumodd);
   
        
    return 0;
}