#include<stdio.h>
int CountOdd(int iNo)
{
	
	int iDigit1 = 0;
	int iDigit2 = 0;
	int iCnt1 = 0;
	int iCnt2 = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit1 = iNo % 10;
		if((iDigit1 % 2)==0)
		{
			iSum1 = iSum1 + iDigit1;
		}
		iDigit2= iNo % 10;
		if((iDigit2 % 2)!=0)
		{
			iSum2 = iSum2 + iDigit2;
		}
		
		
		iNo = iNo / 10;
	}
	
	
	return iSum1 - iSum2;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter first Number:\n");
	scanf("%d",&iValue);
	iRet = CountOdd(iValue);
	printf("odd Number is:%d",iRet);
	
	return 0;
}