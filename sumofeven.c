#include<stdio.h>
int sum_of_even_nos(int);
int sum_of_even_nos(int n)
{
	int sum=0,i;
  	for(i=2;i<=n;i=i+2)
  	{  
   		if(i%2==0)
  			sum=sum+i;
	}
  	return sum;
 }

int main()
{
	int n;
	printf("enter any no.");
	scanf("%d",&n);
	printf("%d", sum_of_even_nos(n));
}  
  
