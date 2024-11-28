#include <stdio.h>

int main(){
    int a,num,max=0,secondmax=0;
    printf("Enter Number Of Numbers =" );
    scanf("%d",&a);

    printf("Enter a number =");
    scanf("%d",&num);
    max=num;

    for(int i=1;i<a;i++)
    {
        printf("Enter a number =");
        scanf("%d",&num);

        if(num>max)
        {
            secondmax=max;
            max=num;
        }
        else if(num > secondmax)
        {
            secondmax=num;
        }

    }
    printf("Max= %d, Second Max = %d \n",max,secondmax);
    return 0;
}