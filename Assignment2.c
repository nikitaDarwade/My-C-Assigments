// PROGRAM TO PRINT MARVELLOUSE 5 TIMES ON SCREEN....?
#include<stdio.h>
void Display(int ino)
{
	int icnt = 0;
	for(icnt = 1;icnt<=ino;icnt++)
	{
		printf("marvellouse\n");
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
	