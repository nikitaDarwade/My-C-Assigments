// PROGRAM TO PRINT 5 TO 1 NUMBERS ON SCREEN...?
#include<stdio.h>
void Display(int ino)
{
	int i = 0;
	for(i=ino;i>=1;i--)
	{
		printf("%d\t",i);
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