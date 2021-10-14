//	Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF. 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask = 0x08104040;	//0000 1000 0001 0000 0100 0000 0100 0000
								//  0	 8 	  1    0    4    0    4    0
	UINT iResult = 0;

	iResult = iNo & iMask;
	
	if(iResult == iMask)
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
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == true)
	{
		printf("7th & 15th & 21st & 28th Bits are ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	return 0;
}