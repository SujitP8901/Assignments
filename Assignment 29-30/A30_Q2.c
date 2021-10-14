//	Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//	Input : 10 15 (1010 1111)
//	Output : 2 4

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iValue1, UINT iValue2)
{
	UINT iAns = 0;
	int iBit = 0, iPos = 1;
	
	iAns = iValue1 & iValue2;
	
	printf("Common Bits are at : \n");
	
	while(iAns != 0)
	{
		iBit = iAns & 1;
		if(iBit == 1)
		{
			printf("%d \t", iPos);
		}
		iAns = iAns >> 1;
		iPos++;
	}
}

int main()
{
	UINT iValue1 = 0, iValue2 = 0;
	
	printf("Enter First Number : \n");
	scanf("%d", &iValue1);
	
	printf("Enter Second Number : \n");
	scanf("%d", &iValue2);
	
	CommonBits(iValue1, iValue2);
	
	return 0;
}