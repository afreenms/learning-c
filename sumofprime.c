#include<stdio.h>
int is_prime(int);
int sum_of_prime(int);
int is_prime(int n)
{	
	int flag=1,i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{	
			flag=0;
			break;
		}
		i++;
	}
	return flag;
}

int sum_of_prime(int n)
{
	int sum=0,i;
	for(i=2;i<=n;i++)
        {
		if(is_prime(i) == 1)
		{
			sum=sum+i;
		}	
		
	}
	return sum;
}

int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	printf("%d", sum_of_prime(n));
	return 0;
}

	
	
