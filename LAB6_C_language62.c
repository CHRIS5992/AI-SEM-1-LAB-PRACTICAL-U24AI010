#include <stdio.h>

int main(){
    
    int a,c,d,temp,n;
    printf("ENTER NUMBER OF VALUES OF ARRAY:");
    scanf("%d",&a);
    int array[a];

    for(int i = 0 ; i<a ;i++)
    {   
        printf("Element %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("ARRAY A");
    for(int i = 0 ; i<a ;i++)
    {
        d=i+1;
        printf("\n Element %d:",d);
        printf("%d",array[i]);
    }
    
    for(int i = 0 ; i<(a/2) ;i++)
    {   
    temp = array[i];
    array[i] = array[a - 1 - i];  
    array[a - 1 - i] = temp;
    }

    printf("\n ARRAY REVERSED");
    for(int i = 0 ; i<a ;i++)
    {
        d=i+1;
        printf("\n Element %d:",d);
        printf("%d",array[i]);
    }

    return 0;
}
