//6.Accept one number from user and print that numbers of * on screen.
#include<stdio.h>
void display(int ino)
{
	int icnt=0;
	while(icnt<ino)
	{
		printf("*\t");
		icnt++;
	}
}
int main()
{
	int ivalue=0;
	printf("Enter number");
	scanf("%d",&ivalue);
	display(ivalue);
	return 0;
}
