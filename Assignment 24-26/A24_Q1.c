//	Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
//	Input : “Marvellous Multi OS”
//			e
//	Output : TRUE

//	Input : “Marvellous Multi OS”
//			W
//	Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
	bool flag = false;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			flag = true;
			break;
		}
		str++;
	}
	return flag;
}

int main()
{
	char Arr[50];
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s ", Arr);
	
	printf("Enter Character : \n");
	scanf(" %c", &cValue);
	
	bRet = ChkChar(Arr, cValue);
	
	if(bRet == true)
	{
		printf("Character is Present.\n");
	}
	else
	{
		printf("Character is not Present.\n");
	}
	
	return 0;
}
