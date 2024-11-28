#include <stdio.h>

int main(){
    int a[10],val,count_positive=0,count_negative=0,count_zero=0;
    printf("Enter Values:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&val);
        a[i]=val;
       if(val>0)
       {
        count_positive++;
       }
       if(val==0)
       {
        count_zero++;
       }
       if(val<0)
       {
        count_negative++;
       }

    }
    printf("NUMBER OF POSITIVE NUMBER = %d \n NUMBER OF ZEROES = %d \n NUMBER OF NEGATIVE NUMBERS= %d",count_positive,count_zero,count_negative);

    return 0;
}