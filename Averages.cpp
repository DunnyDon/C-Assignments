#include<stdio.h>
#include<conio.h>
float integer[100],sum,counter;
float average;
int i=0;
int in;
void main()
{	
	
	while(in!=9999)
	{
		printf("Please enter your value\t");
		scanf("%f",&integer[i]);
		sum=sum+integer[i];
		counter=counter+1;
		
		if(integer[i]==9999)
		{
			in=9999;
		}
		i++;

	}
	average=(sum-9999)/(counter-1);
	printf("\nThe average of the numbers entered %f",average);
	for(i=0;i<counter-1;i++)
	{	
		
		if(integer[i]==9999);
		
		else if(integer[i]>average)
		{	
			printf("\nA value entered that was greater than the average was ");
			printf("%f",integer[i]);
		}
	}
	getch();
}

