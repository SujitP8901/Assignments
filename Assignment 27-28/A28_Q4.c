//	Write a program which accept one number from user and toggle 7th and 10th bit of that number. 
//Return modified number.
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iAns = 0;				
	UINT iMask = 0x00000240;	//0000 0000 0000 0000 0000 0010 0100 0000
								//  0    0    0    0    0    2    4    0
	
	iAns = iNo ^ iMask;
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
