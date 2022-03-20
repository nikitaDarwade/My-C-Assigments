//ACCEPT ONE NUMBER FROM USER PRINT THAT NUMBER OF * ON SCREN....?
#include<stdio.h>
void Display(int ino)
{
	int i = 0;
	for(i=1;i<=ino;i++)
	{
		printf("*\t");
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