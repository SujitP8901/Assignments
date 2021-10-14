//	Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
//	Input : 897 9 13
//	Toggle all bits from position 9 to 13 of input number ie 879.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	if(((iStart < 1) || (iStart > 32)) || ((iEnd < 1) || (iEnd > 32)))
	{
		return -1;
	}
	
	UINT iAns = 0;
	UINT iMask = 0x00000001, iResult = 0;
	int iCnt = 0;
	
	for(iCnt = iStart; iCnt <= iEnd; iCnt++)
	{
		iMask = iMask << (iCnt - 1);
		
		iResult = iResult | iMask;
		
		iMask = 0x00000001;
	}
	
	iAns = iNo ^ iResult;
	
	return iAns;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	int iBit1 = 0, iBit2 = 0; 
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	printf("Enter Bit 1 : \n");
	scanf("%d", &iBit1);
	
	printf("Enter Bit 2 : \n");
	scanf("%d", &iBit2);
	
	iRet = ToggleBitRange(iValue, iBit1, iBit2);
	
	if(iRet != -1)
	{
		printf("After toggle : %d", iRet);
	}
	else
	{
		printf("-1");
	}
	
	return 0;
}