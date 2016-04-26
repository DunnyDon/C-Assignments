#include<stdio.h>
#include<conio.h>
void Fibonacci();

void main()
{
	Fibonacci();
	getch();
}

void Fibonacci()
{
	int num,i;
	long sum;
	long fib[100];
	for(i=0;i<2;i++)
	{
		fib[i]=0;
	}
	fib[2]=1;
	printf("How many fibonnaci numbers do you wish to see\n");
	scanf("%d",&num);
	printf("\n%d \t %d",1,fib[2]);
	for(i=3;i<=num;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		printf("\n%d \t %d",i-1,fib[i]);
	}
}