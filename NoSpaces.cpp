#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char sentence[50];
	int i;
	int j=0;
	gets(sentence);
	//puts(sentence);
	for(i=0;i<50;i++)
	{
		if(sentence[i]==' ')
		{
			for(j=i;j<50;j++)
			{
				sentence[j]=sentence[j+1];
			}
		}
	}
	puts(sentence);
	getch();
}