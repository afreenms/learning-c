#include<stdio.h>
int add(int,int);
int add(int first,int second)
{
   	return first+second;
}

int main()
{
	int first_num,second_num,total,total_characters;
	printf("enter two numbers\n");
	scanf("%d %d",&first_num,&second_num);
	total = add(first_num,second_num);
	total_characters = printf("%d",total);
	printf("(%d)", total_characters);
	return 0;
}


