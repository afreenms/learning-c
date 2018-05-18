#include<stdio.h>
int graphical_rectangle(int,int);
int graphical_rectangle(int length,int breadth)
{
	int row,column;
	for(row=1;row<=breadth;row++)
	{
		for(column=1;column<=length;column++)
		{
			if(row==1 || column==1 || row==breadth || column==length)
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
	int length,breadth;
	printf("enter the length and breadth of rectangle\n");
	scanf("%d %d",&length,&breadth);
	graphical_rectangle(length,breadth);
	return 0;
}
