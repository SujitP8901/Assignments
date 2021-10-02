//	Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and 
//Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
	int i = 0;
	for(i = 0; i <= 127; i++)
	{
		printf("%d\t%x\t%o\t%c\n", i, i, i, i);
	}
}

int main()
{
	printf("\t\t\t ASCII Table \t\t\t\n");
	printf("**************************************************\n");
	
	printf("Dec\tHexa\tOct\tCh\n");
	DisplayASCII();
	
	printf("**************************************************\n");
	
	return 0;
}