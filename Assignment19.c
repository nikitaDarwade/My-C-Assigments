#include<stdio.h>
int DisplayNonFactoAdd(int iNo)
{
	int iCnt = 0;
	int isum = 0;
	int isum1 =0;
	int iCnt1 =0;
	if(iNo == 0)
	{
		printf("you enterd zero");
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			isum = isum + iCnt;
			
		}
	}
	printf("%d",isum);
	for(iCnt1=1;iCnt1<iNo;iCnt1++)
	{
		if((iNo % iCnt1)!=0)
		{
			isum1 = isum1 + iCnt1;
			
		}
	}
	printf("%d",isum1);
	return isum - isum1; 
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=DisplayNonFactoAdd(iValue);
	printf("Addition is: %d",iRet);
	
	
	return 0;
}