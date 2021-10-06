//	Write a program which accept string from user and copy that characters of that string into another string by 
//toggling the case.
//	Input : “Marvellous Python 2”
//	Output : “mARVELLOUS pYTHON 2”

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *src + 32;
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*src = *src - 32;
		}
		
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[50] = "Marvellous Python 2";
	char Brr[50];
	
	StrCpyToggle(Arr, Brr);
	
	printf("Modified String : %s",Brr);
	
	return 0;
}