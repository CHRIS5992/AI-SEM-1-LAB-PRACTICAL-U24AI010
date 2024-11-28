#include <stdio.h>

int main(){
    int a; 
    printf("Enter number of rows");
    scanf("%d",&a);
    char c= 'A';

    for(int i=0;i<a;i++)
     {
        for(int n= 0;n<=i;n++ )
        {
            printf("%c",c);
            
        }
        printf("\n");
        c=c+1;
     }

    return 0;
}