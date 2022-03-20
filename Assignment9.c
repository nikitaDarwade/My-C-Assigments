//Accept two number from user and Display first number in second of tyme....?
#include<stdio.h>
void Display(int ino, int ifrequency)
{
	int i = 0;
	if(ifrequency<0)
	{
		ifrequency = -ifrequency;
	}
	for(i = 1;i<=ifrequency;i++)
	{
		printf("%d\t",ino);
	}
}
	
int main()
{
	int ivalue1 = 0;
	int ivalue2 = 0;
	
	printf("enter two number\n");
	scanf("%d",&ivalue1);
	scanf("%d",&ivalue2);
	Display(ivalue1,ivalue2);
	
	return 0;
}