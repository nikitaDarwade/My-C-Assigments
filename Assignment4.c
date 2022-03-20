//ACCEPT ONE NUMBER FROM USER AND CHECK WHETHER IS DIVISIBLE 5 OR NOT....?
#include<stdio.h>
#include<stdbool.h>
bool check(int ino)
{
	
	if((ino % 5)==0)
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
	bret=check(ivalue);
	if(bret==true)
	{
		printf("number is divisible by 5\n");
	}
	else
	{
		printf("number is NOT Divisible by 5");
	}
	
	return 0;
}