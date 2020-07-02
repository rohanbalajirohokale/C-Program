//7.Accept one number from user and print that number of * on screen.

#include<stdio.h>
void display(int ino)
{
	while(ino>0)
	{
		printf("*\t");
		ino--;

	}
}
int main()
{
	int ivalue=0;
	printf("Enter Number");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}
