#include<stdio.h>
int equilateral_triangle(int);
int equilateral_triangle(int n)
{
	int i,j;
 	for(i=1;i<n;i++)
  	{					
		for(j=1;j<=n-i;j++)
		{	
			printf(" ");
		}
               
		int last_column = (2*i) - 1;
		for(j=1;j<=last_column;j++)
		{
			if(i==n || 1==j || j == last_column)
			{
				printf("*");
                	}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i = 1; i <= n*2; i=i+2) {
		printf("* ");
	}
	printf("\n");
	return 0;
}

int main()
{
	int n;
	printf("enter the side of an equilateral_triangle");
	scanf("%d",&n);
	equilateral_triangle(n);
	return 0;
}
