//	Accept Character from user and check whether it is small case or not (a-z).
//	Input : g
//	Output : TRUE

//	Input : D
//	Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
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
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter Character : \n");
	scanf("%c",&cValue);
	
	bRet = ChkSmall(cValue);
	
	if(bRet == true)
	{
		printf("It is Small Letter");
	}
	else
	{
		printf("It is not Small Letter");
	}
	
	return 0;
}