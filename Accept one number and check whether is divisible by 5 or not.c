//3.Accept one number and check whether is divisible by 5 or not.
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL check(int ino)
{
	if(ino%5==0)
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
	bret=check(ivalue);
	if(bret==true)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
		return 0;
}




