//	Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
//	Input : 257
//	Output : TRUE

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
	UINT iMask1 = 0x00000100;	//0000 0000 0000 0000 0000 0001 0000 0000
	UINT iMask2 = 0x00000800;	//0000 0000 0000 0000 0000 1000 0000 0000
	
	UINT iAns1 = 0, iAns2 = 0;
	
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
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == true)
	{
		printf("9th or 12th bit is ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	return 0;
}