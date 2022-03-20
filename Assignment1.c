//PROGRAM TO DIVIDE TO NUMBERS..?

#include<stdio.h>
int Divide(float ino1,float ino2)
{
	int iAns = 0;
	
	iAns=ino1/ino2;
	
	return iAns;
}
int main()
{
    float ivalue1 = 0;
	float ivalue2 = 0;
	float iret = 0;
	
	printf("enter first number\n");
	scanf("%f",&ivalue1);
	
	printf("enter second number\n");
	scanf("%f",&ivalue2);
	
	iret=Divide(ivalue1,ivalue2);
	
	printf("Answer is:%f\n",iret);
	
	return 0;
}
	
	