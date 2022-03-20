#include<stdio.h>
int MultiDigit(int iNo)
{
	int iDigit = 0;
	int isum = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo!=0)
	{
		iDigit = iNo % 10;
		if(iDigit !=0)
		{
		isum = isum * iDigit;
		}
		iNo = iNo / 10;
	}
	return isum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter first Number:\n");
	scanf("%d",&iValue);
	iRet = MultiDigit(iValue);
	printf("multiplication is:%d",iRet);
	
	return 0;
}