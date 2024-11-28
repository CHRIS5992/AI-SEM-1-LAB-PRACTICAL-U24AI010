#include <stdio.h>

int main(){
	int a[3][3],b[3][3],i=0,j=0;


	
	printf("ENTER MATRIX:");
	for( i=0 ; i <3 ;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[j][i]);
		}
	}

	printf("MATRIX A = \n " );
	for( i=0 ; i <3 ;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
	printf("MATRIX TRANSPOSE = \n");
	for( i=0 ; i <3 ;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}