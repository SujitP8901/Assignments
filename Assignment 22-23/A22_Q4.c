//	Write a program which accept string from user and check whether it contains vowels in it or not.
//	Input : “marvellous”
//	Output : TRUE

//	Input : “Demo”
//	Output : TRUE

//	Input : “xyz”
//	Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	bool flag = false;
	
	while(*str != '\0')
	{
		if((*str == 'A') || (*str == 'a') || (*str == 'E') || (*str == 'e') || (*str == 'I') || (*str == 'i') || (*str == 'O') || (*str == 'o') || (*str == 'U') || (*str == 'u'))
		{
			flag = true;
		}
		str++;
	}
	
	return flag;
}

int main()
{
	char Arr[50];
	bool bRet = false;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkVowel(Arr);
	
	if(bRet == true)
	{
		printf("Vowel is Present");
	}
	else
	{
		printf("Vowel is not Present");
	}
	
	return 0;
}
