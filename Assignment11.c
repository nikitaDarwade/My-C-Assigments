#include<stdio.h>
void EvenNub( int ivalue)
{
	int icnt = 0;
	if(ivalue == 0)
	{
		printf("you entered 0 number");
	}
	if(ivalue<0)
	{
		ivalue = -ivalue;
	}
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		if((icnt % 2)==0)
		{
			printf("%d\t",icnt);
		}
	}
}
int main()
{
	int ivalue = 0;
	printf("Enter first number\n");
	scanf("%d",&ivalue);
	EvenNub(ivalue);
	
	return 0;
}