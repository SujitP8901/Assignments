//	Write a program which accept one number from user and toggle contents of first and last nibble of the number. 
//Return modified number. (Nibble is a group of four bits)

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iAns = 0;
	UINT iMask = 0xf000000f;
	
	iAns = iNo ^ iMask;
	
	return iAns;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);

	iRet = ToggleBit(iValue);
	
	printf("Modified Number : %d", iRet);
	
	return 0;
}