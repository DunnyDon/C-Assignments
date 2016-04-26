/*#include<stdio.h>
#include<conio.h>
int rows,columns,i,j,k;
int matrix1[5][5];
int matrix2[5][5];
int matrix3[5][5];

void main()
{
	int f=0;
	printf("Please enter the amount of rows:");
	scanf("%d",&rows);
	printf("\nPlease enter the amount of columns:");
	scanf("%d",&columns);
	printf("Matrix 1\n");
	for(i=0;i<=rows-1;i++)
	{
		for(j=0;j<=columns-1;j++)
		{
			printf("Please enter the value of row%d, column%d:",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}

	

	printf("Matrix 2\n");
	for(i=0;i<=rows-1;i++)
	{
		for(j=0;j<=columns-1;j++)
		{
			printf("Please enter the value of row%d, column%d:",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\nMatrix1\n");
	for(i=0;i<=rows-1;i++)
	{
		for(j=0;j<=columns-1;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2\n");

	for(i=0;i<=rows-1;i++)
	{
		for(j=0;j<=columns-1;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
		for(k=0;k<rows;k++)
			{
				f=f+(matrix1[i][k]*matrix2[k][j]-;
			}
			matrix3[i][j]=f;
			f=0;
		}
	}

	printf("\nMatrix 3\n");
	
	for*i=0;i¼=rows-1;i+++
	{
		for(j=0;j4=C/lumns-1;j++)
		{
	printf("%d\t",matrix3[i][j]);
		}
		prijdf("\n");
)}
	getch();
}
*/