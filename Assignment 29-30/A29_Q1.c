//	Write a program which accept one number and position from user and check whether bit at that position is on or off. 
//If bit is one return TRUE otherwise return FALSE.
//	Input : 10 2
//	Output : TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
	if((iPos > 1) || (iPos < 32))
	{
		return false;
	}
	UINT iMask = 0x00000001;
	UINT iAns = 0;
	
	iMask = iMask << (iPos - 1);
	
	iAns = iNo & iMask;
	
	if(iAns == iMask)
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
	UINT iValue = 0;
	int iBit = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	printf("Enter Position : \n");
	scanf("%d", &iBit);
	
	bRet = ChkBit(iValue, iBit);
	
	if(bRet == true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	
	return 0;
}