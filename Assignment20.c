#include<stdio.h>
int DisplayNonFactoAdd(int iNo)
{
	int iCnt = 0;
	int isum=0;
	if(iNo == 0)
	{
		printf("you enterd zero");
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo % iCnt)!=0)
		{
			isum = isum + iCnt;
		}
	}
	return isum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=DisplayNonFactoAdd(iValue);
	printf(" Addition is:%d",iRet);
	
	
	return 0;
}