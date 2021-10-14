//	Write a program which accept one number from user and on its first 4 bits. 
//Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iAns = 0;				
	UINT iMask = 0x0000000f;	//0000 0000 0000 0000 0000 0000 0000 1111
								//  0    0    0    0    0    0    0    f
	iAns = iNo | iMask;
	return iAns;
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
