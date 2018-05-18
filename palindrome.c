#include<stdio.h>
int is_palindrome(int);
int is_palindrome(int n)
{
	int reverse=0,x,i;
	i=n;
	while(n>0)
	{
		x=n%10;
		reverse=reverse*10+x;
		n=n/10;	
	}
	return (i==reverse);
}	

int read_input() {
	int n;
	printf("Enter the number = ");
	scanf("%d", &n);
	return n;
}


int main()
{
	int n;
	n = read_input();
	if (is_palindrome(n) == 1)
	{
		printf("%d is palindrome",n);
	} else
	{
		printf("%d is not palindrome",n);
	}
	return 0;
}
