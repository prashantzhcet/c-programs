#include<stdio.h>
main()
{
	int i,j,num=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if((j>=i)&&(i+j<=8))             
			printf("%d\t",num++);
			else
			printf(" \t");
		}
		printf("\n");
	}
	for(i=2;i<=4;i++)           
	{
		for(j=1;j<=7;j++)
		{
			if((j-i<=3)&&(i+j>=5))
			printf("%d\t",num++);
			else
			printf(" \t");
		}
		printf("\n");
	}
}
