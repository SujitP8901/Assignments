//	Accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 4 iCol = 4
//	Output : * * * *
//			 * * * #
//			 * * # #
//			 * # # #

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	if(iRow != iCol)		//Filter
	{
		return;
	}
	
	int i = 0, j = 0;
	for(i = iRow; i >= 1; i--)
	{
		for(j = iCol; j >= 1; j--)
		{
			if((i + j) <= iRow)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number of Rows and Columns : \n");
	scanf("%d %d",&iValue1, &iValue2);
	
	Pattern(iValue1, iValue2);
	
	return 0;
}