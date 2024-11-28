
#include <stdio.h>

int main(){
    
    int val1,val2,a[10],b[10],c[10];


    printf("\n ENTER VALUES FOR ARRAY 1 : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&val1);
        a[i]=val1;
    }
    printf("\n ENTER VALUES FOR ARRAY 2 : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&val2);
        b[i]=val2;
    }

    printf("\n VALUES OF ARRAY 1 :\n ");
     for(int i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    
    }

    printf("\n VALUES OF ARRAY 2 : \n");
     for(int i=0;i<10;i++)
    {
        printf("\n %d",b[i]);
    
    }
    for(int i=0;i<10;i++)
    {
        c[i]=a[i];
        b[i]=c[i];
        a[i]=b[i];
    }
     printf("\n VALUES OF ARRAY 1 :\n ");
     for(int i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    
    }

    printf("\n VALUES OF ARRAY 2 : \n");
     for(int i=0;i<10;i++)
    {
        printf("\n %d",b[i]);    
    }
}