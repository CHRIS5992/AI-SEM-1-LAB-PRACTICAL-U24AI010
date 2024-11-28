#include <stdio.h>
int main()
{
    int t1=0,t2=1,a,nextterm,i;
    nextterm= t1+t2;
    printf("Enter Number of Terms=");
    scanf("%d",&a);
    printf("%d,%d,%d",t1,t2,nextterm);


for(i=3;i<a;i++)
{
    t1=t2;
    t2=nextterm;
    nextterm=t1+t2;
    printf(",%d",nextterm);
}

    return 0;
}