#include<stdio.h>
void Display(int iValue)
{
	int iDigit = 0;
	int iRev = 0;
	while(iValue!=0)
	{
		iDigit=iValue % 10;
		iRev = (iRev * 10 )+ iDigit;
		iValue = iValue / 10;
	}
	printf("%d\n",iRev);
}
int main()
{
	int iNo = 0;
	int iRet = 0;
	printf("Enter NumBer\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}
	