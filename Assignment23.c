#include<stdio.h>
int CountFrequency(int iValue)
{
	int iCnt = 0;
	int iDigit = 0;
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		if(iDigit == 2)
		{
			iCnt++;
		}
		iValue  = iValue /10;
	}
	return iCnt;
}
	
int main()
{
	int  iNo = 0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=CountFrequency(iNo);
	printf("Frequency is : %d\t",iRet);
	
	
	return 0;
}