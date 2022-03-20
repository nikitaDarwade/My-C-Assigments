#include<stdio.h>
#include<stdbool.h>
bool CheckWhether(int iValue)
{
	int iDigit = 0;
	
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		
		if(iDigit == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
		iValue = iValue / 10;
	}
}

int main()
{
	int iNo = 0;
	int bRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iNo);
	bRet = CheckWhether(iNo);
	if(bRet == true)
	{
		printf("number contains Zero");
	}
	else
	{
		printf("Not contain Zero");
	}
	
	return 0;
}
	