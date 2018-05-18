#include<stdio.h>
int is_prime(int);
int is_prime(int n)
{
	int i=2;
	int flag=1;
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

int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	is_prime(n);
	if (is_prime(n) == 1) {
		printf("%d is a prime number\n", n);
	} else {
		printf("%d is not a prime number\n", n);
	}
	return 0;	
}	
