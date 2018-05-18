#include<stdio.h>
int right_angled_triangle(int);
int right_angled_triangle(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1 || j==1 || i==n || i==j)
			{
				printf("*");
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
			
int main()
{
	int n;
	printf("enter the height of triangle");
	scanf("%d",&n);
	right_angled_triangle(n);
	return 0;
}

