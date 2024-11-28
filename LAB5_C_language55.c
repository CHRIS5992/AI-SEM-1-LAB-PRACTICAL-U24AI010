#include <stdio.h>

int main(){
    int a[10],val,count_odd=0,count_even=0;
    printf("Enter Values:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&val);
        a[i]=val;
        if(val%2==0)
        {
        count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("NUMBER OF EVEN NUMBER = %d \n NUMBER OF ODD NUMBER = %d",count_even,count_odd);

    return 0;
}