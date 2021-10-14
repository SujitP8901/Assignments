//	Write a program which accept one number from user and count number of ON (1) bits in it 
//without using % and / operator.
//	Input : 11
//	Output : 3

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	UINT iMask = 0x00000001;
	UINT iAns = 0;
	
	int iCnt = 0;
	while(iNo != 0)
	{
		iAns = iNo & iMask;
		if(iAns == iMask)
		{
			iCnt++;
		}
		iNo = iNo >> 1;
	}
	
	return iCnt;
}

int main()
{
	UINT iValue = 0;
	int iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	iRet = CountOne(iValue);
	
	printf("Count of One is : %d", iRet);
	
	return 0;
}