#include<stdio.h>
#include<conio.h>
void triangle(int rows);
long factorial(int n);
void main()
{	
	int rows;
	printf("How many rows do you want displayed?\n");
	scanf("%d",&rows);
	triangle(rows);
	printf("\n");
	
	getch();
}

void triangle(int rows)
{
	int i,j,k;
	
	for(i=0;i<=rows;i++)
	{
		for(j=rows;j-i>0;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			 printf("%ld ",factorial(i)/(factorial(k)*factorial(i-k)));
			 /*if(i==3)
			 {
				 printf("\ni is %d  k is %d  fi %d  fk %d\n",i,k,factorial(i),factorial(k));
				 getch();
			 }*/
		}
		printf("\n");
	}
}


long factorial(int n)
{
   int c;
   long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}