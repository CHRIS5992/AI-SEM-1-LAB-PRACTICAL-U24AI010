#include <stdio.h>

int main(){
    int num ;
    printf("ENTER NUMBER OF LINES:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {   
        int a = i-1;
        for( int q=1;q<= num-i;q++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%d",a);
            a--;
        }
        
        
        printf("\n");
    }











    return 0;
}