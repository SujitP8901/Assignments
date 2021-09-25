//	Accept number of rows and number of columns from user and display below pattern.
//	Input : iRow = 4 iCol = 4
//	Output : A B C D	11	12	13	14
//			 A B C D	21	22	23	24	
//			 A B C D	31	32	33	34
//			 A B C D	41	42	43	44

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	char ch = '\0';
	
	for(i = 1 ; i <= iRow; i++)
	{
		for(j = 1, ch = 'A'; j <= iCol; j++)
		{
			printf("%c\t", ch);
			ch++;
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