//Accept number from user and check whether that number is even or odd...?
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}
	if((ino % 2)==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int ivalue = 0;
	bool bret = false;
	
	printf("enter number\n");
	scanf("%d",&ivalue);
	bret=CheckEven(ivalue);
	if(bret==true)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	
	return 0;
}
	