//	Write a program which checks whether first and last bit is On or OFF. 
//	First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask = 0x80000001;	//1000 0000 0000 0000 0000 0000 0000 0001
								//  8	 0 	  0    0    0    0    0    1
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
		printf("First and Last Bits are ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	return 0;
}
