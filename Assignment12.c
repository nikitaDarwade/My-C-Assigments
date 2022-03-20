#include<stdio.h>
void DisplayEvenFacto(int iNo)
{
	int icnt = 0;
	if(iNo == 0)
	{
		printf("you enterd 0");
	}
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(icnt=1;icnt<=iNo;icnt++)
	{
		if(iNo%icnt==0&&icnt%2==0)
		{
			printf("%d\t",icnt);
		}
	}
}
int main()
{
	int ivalue = 0;
	printf("enter first number\n");
	scanf("%d",&ivalue);
	DisplayEvenFacto(ivalue);
	
	return 0;
}