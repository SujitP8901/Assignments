//	Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
//	Input : “Marvellous Multi OS”
//			M
//	Output : 11

//	Input : “Marvellous Multi OS”
//			W
//	Output : -1

//	Input : “Marvellous Multi OS”
//			e
//	Output : 4
#include<stdio.h>

int strlenX(char *str)
{
	int iLength = 0;
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	iLength--;
	return iLength;
}

int LastOcc(char *str, char ch)
{
	char *ptr = NULL;
	int iSize = 0;
	
	ptr = str;
	ptr--;
	
	while(*str != '\0')
	{
		str++;
		iSize++;
	}
	iSize--;
	str--;
	
	while(*str != *ptr)
	{
		if(*str == ch)
		{
			break;
		}
		iSize--;
		str--;
	}
	
	return(iSize);
}

int main()
{
	int iRet = 0;
	char cValue = '\0';
	char Arr[50];
	
	printf("Enter string: \t");
	scanf("%c %[^'\n']s", &cValue,Arr);
	
	//printf("Enter String : \n");
	//scanf("%[^'\n']s",Arr);
	
	//printf("Enter Character : \n");
	//scanf("%c",&cValue);
	
	iRet = LastOcc(Arr, cValue);
	
	printf("First Occurence of that Character is at : %d",iRet);
	
	return 0;
}