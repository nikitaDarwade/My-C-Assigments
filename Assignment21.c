#include<stdio.h>
int DisplayRevers(int iValue)
{
	int iDigit = 0;
	int iRev = 0;
	if(iValue == 0)
	{
		return -1;
	}
	if(iValue < 0 )
	{
		iValue = - iValue;
	}
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		printf("%d\n",iDigit);
		iRev = (iRev * 10) + iDigit;
		iValue = iValue/10;
	
	}
	return iRev;
}
int main()
{
	int iNo = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	iRet=DisplayRevers(iNo);
	printf("Revers number is:%d\t",iRet);
	
	return 0;
}
	