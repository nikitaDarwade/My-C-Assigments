#include<stdio.h>
void DisplayFacto(int iNo)
{
	int iCnt = 0;
	if(iNo == 0)
	{
		printf("you enterd zero");
	}
	if(iNo < 0);
	{
		iNo = -iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		if((iNo % iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	DisplayFacto(iValue);
	
	
	return 0;
}