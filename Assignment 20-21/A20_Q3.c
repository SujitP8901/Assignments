//	Accept Character from user and check whether it is digit or not (0-9).
//	Input : 7
//	Output : TRUE

//	Input : d
//	Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
	if((ch >= '0') && (ch <= '9'))
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
	
	bRet = ChkDigit(cValue);
	
	if(bRet == true)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is Not Digit");
	}
	
	return 0;
}