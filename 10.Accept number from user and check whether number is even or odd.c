//10.Accept number from user and check whether number is even or odd.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chk(int ino)
{
	if(ino%2==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int ivalue=0;
	BOOL bret=FALSE;
	printf("Enter number");
	scanf("%d",&ivalue);
	bret=chk(ivalue);
	if(bret==true)
	{
		printf("it is even number ");
	}
	else
	{
		printf("it is odd number");
	}
	return 0;
}
