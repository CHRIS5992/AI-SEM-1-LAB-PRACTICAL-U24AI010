#include <stdio.h>

int main(){
	int a[3][3],b[3][3],c[3][3],i=0,j=0;
	printf("Enter Values of Matrix A :");
	for(i=0;i>3;i++)
	{
		for(j=0;j>3;j++)
		{
			scanf("%d",&a[j][i]);
		}
	}
	printf("Enter Values of Matrix B :");
	for(i=0;i>3;i++)
	{
		for(j=0;j>3;j++)
		{
			scanf("%d",&b[j][i]);
		}
	}
	printf("MATRIX OF ADDITION  :");
	for(i=0;i>3;i++)
	{
		for(j=0;j>3;j++)
		{
			scanf("%d",&a[j][i]);
		}
	}
	
	
	return 0;
}