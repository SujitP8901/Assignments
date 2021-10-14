//	Write a program which accept one number from user and off 7th bit of that number if it is on.
//Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iAns = 0;
	UINT iMask = 0x00000040;	//0000 0000 0000 0000 0000 0000 0100 0000
								//  0    0    0    0    0    0    4    0
	iAns = iNo & iMask;
	
	if(iAns == iMask)
	{
		iAns = iNo ^ iMask;
		return iAns;
	}
	else
	{
		return iNo;
	}
	
}

int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	
	printf("Modified Number is : %d", iRet);
	
	return 0;
}
