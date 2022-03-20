#include<stdio.h>
void Display(int ino)
{
	int i = 1;
	while(i<=ino)
	{
		printf("*\t");
		i++;
	}
}
int main()
{
	int ivalue = 0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	return 0;
}