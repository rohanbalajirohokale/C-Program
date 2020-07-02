//4.Accept one number from user and print that number of * on screen.
#include<stdio.h>
void display(int No)
{
	int i=0;
	for(i=1;i<=No;i++)
	{
		printf("*\t");
	}
}
int main()
{
	int ivalue=5;
	display(ivalue);
	return 0;
}
