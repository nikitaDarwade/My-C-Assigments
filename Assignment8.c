//Accept one number from user  if number is less than 10 then print "HELLO" otherwise print "Demo"
#include<stdio.h>
void Display(int ino)
{
	if(ino<10)
	{
		printf("HELLO");
	}
	else
	{
		printf("DEMO");
	}
}
		
int main()
{
	int ivalue = 0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	return 0;
}