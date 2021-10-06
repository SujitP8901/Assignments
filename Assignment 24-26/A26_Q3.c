//	Write a program which accept string from user and copy that characters of that string into another string by 
//	converting all small characters into capital case.
//	Input : “Marvellous Python 2”
//	Output : “MARVELLOUS PYTHON 2”

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*src = *src - 32;
		}
		
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';
}

int main()
{
	char Arr[50] = "Marvellous Python 2";
	char Brr[50];
	
	StrCpyCap(Arr, Brr);
	
	printf("Modified String : %s", Brr);
	
	return 0;
}