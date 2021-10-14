//	Write a program which accept one number and position from user and on that bit. Return modified number.
//	Input : 10 3
//	Output : 14

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
	if((iPos > 1) || (iPos < 32))
	{
		return -1;
	}
	
	UINT iAns = 0;
	UINT iMask = 0x00000001;
	
	iMask = iMask << (iPos - 1);
	
	iAns = iNo | iMask;
	
	return iAns;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	int iBit = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	printf("Enter Position : \n");
	scanf("%d", &iBit);

	iRet = OffBit(iValue, iBit);
	
	if(iRet != -1)
	{
		printf("Modified Number : %d", iRet);
	}
	else
	{
		printf("-1");
	}
	
	return 0;
}