#include<stdio.h>
int DisplayMult(int iNo)
{
	int icnt = 0;
	int iMult = 1;
	for(icnt = 1;icnt<=iNo/2;icnt++)
	{
		if((iNo % icnt)==0)
		{
			iMult = iMult * icnt;
			
		}
		
    }
	
   return iMult;
	
}
		
		
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=DisplayMult(iValue);
	printf("Multiplication is %d",iRet);
	
	
	
	return 0;
}