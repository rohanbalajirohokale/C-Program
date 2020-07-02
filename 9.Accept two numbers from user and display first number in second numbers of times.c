//9.Accept two numbers from user and display first number in second numbers of times.
//Input:-12 5
//Output:12 12 12 12 12
//Input:-2 3
//Output:-2 -2 -2
//Input: 21 -3
//Output: 21 21 21

#include<stdio.h>
void display(int ino,int frequency)
{
	int i=0;
	if(frequency<0)
	{
		frequency=-frequency;
	}

	
	for(i=1;i<=frequency;i++)
	{
		printf("%d\t",ino);
	}
}
int main()
{
	int ivalue1=0;
	int count=0;
	printf("Enter First number");
	scanf("%d",&ivalue1);
	printf("Enter frequency");
	scanf("%d",&count);
	display(ivalue1,count);
	return 0;
}
