//	Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
//	Input : “Marvellous Multi OS”
//			M
//	Output : 0

//	Input : “Marvellous Multi OS”
//			W
//	Output : -1
//	Input : “Marvellous Multi OS”
//			e
//	Output : 4

#include<stdio.h>

int FirstOcc(char *str, char ch)
{
	int iIndex = 0;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			break;
		}
		iIndex++;
		str++;
	}
	return iIndex;
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
	
	iRet = FirstOcc(Arr, cValue);
	
	printf("First Occurence of that Character is at : %d",iRet);
	
	return 0;
}