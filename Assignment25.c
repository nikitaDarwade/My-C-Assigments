#include<stdio.h>
int CountFrequency(int iValue,int Freq)
{
	int iCnt = 0;
	int iDigit = 0;
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		if(iDigit < Freq)
		{
			iCnt++;
		}
		iValue  = iValue /10;
	}
	return iCnt;
}
	
int main()
{
	int  iNo1 = 0;
	int  iNo2 = 0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo1);
	
	printf("Enter frequency to check\n");
	scanf("%d",&iNo2);
	
	iRet=CountFrequency(iNo1,iNo2);
	printf("Frequency is : %d\t",iRet);
	
	
	return 0;
}