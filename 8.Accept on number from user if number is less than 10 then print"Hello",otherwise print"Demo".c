8.Accept on number from user if number is less than 10 then print"Hello",otherwise print"Demo".

#include<stdio.h>
void display(int ino)
{
	if(ino<=10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
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
