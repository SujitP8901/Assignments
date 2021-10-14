//	Write a program which accept one number,two positions from user and check whether bit at first or bit at second position is ON or OFF.
//	Input : 10 3 7
//	Output : TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
	if(((iPos1 < 1) || (iPos1 > 32)) || ((iPos2 < 1) || (iPos2 > 32)))
	{
		return false;
	}
	
	UINT iMask1 = 0x00000001;
	UINT iMask2 = 0x00000001;	
	
	UINT iAns1 = 0, iAns2 = 0;
	
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);
	
	iAns1 = iNo & iMask1;
	iAns2 = iNo & iMask2;
	
	if((iAns1 == iMask1) || (iAns2 == iMask2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0, iBit1 = 0, iBit2 = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	printf("Enter Bit 1 : \n");
	scanf("%d", &iBit1);
	
	printf("Enter Bit 2 : \n");
	scanf("%d", &iBit2);
	
	bRet = ChkBit(iValue, iBit1, iBit2);
	
	if(bRet == true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	return 0;
}