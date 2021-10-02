//	Accept Character from user and check whether it is alphabet or not (A-Z a-z).
//	Input : F
//	Output : TRUE

//	Input : &
//	Output : FALSE
#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char c)
{
	if( ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')) )
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
	
	printf("Enter Character :\n");
	scanf("%c",&cValue);
	
	bRet = ChkAlpha(cValue);
	
	if(bRet == true)
	{
		printf("It is Alphabet.");
	}
	else
	{
		printf("It is Not Alphabet.");
	}
	
	return 0;
}