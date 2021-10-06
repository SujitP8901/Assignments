//	Write a program which accept string from user and accept one character. Return frequency of that character.
//	Input : “Marvellous Multi OS”
//			M
//	Output : 2

//	Input : “Marvellous Multi OS”
//			W
//	Output : 0

#include<stdio.h>

int CountChar(char *str, char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	char cValue;
	int iRet = 0;
	
	printf("Enter string: \t");
	scanf("%c %[^'\n']s", &cValue,Arr);
		
	iRet = CountChar(Arr, cValue);
	
	printf("Character frequency is : %d",iRet);
	
	return 0;
}