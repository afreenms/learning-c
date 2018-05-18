#include<stdio.h>
int area(int,int);
int perimeter(int,int);
int area(int length,int breadth)
{
	return length*breadth;
}
int perimeter(int length,int breadth)
{
	return 2*(length+breadth);
}
int main()
{
	int length,breadth;
	printf("enter the length and breadth");
	scanf("%d %d",&length,&breadth);
	printf("%d",area(length,breadth));
	printf("%d",perimeter(length,breadth));
	return 0;
}
	
	
