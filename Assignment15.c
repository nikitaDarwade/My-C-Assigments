#include<stdio.h>
#include<stdbool.h>
bool check(char c)
{
	if(((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))&&((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='u')))
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
	char ch = '\0';
	bool cRet = false;
	printf("enter charector\n");
	scanf("%c",&ch);
	cRet = check(ch);
	if(cRet==true)
	{
		printf("the charecter is vowel");
	}
	else
	{
		printf("charecter is Not");
	}
	
	return 0;
}