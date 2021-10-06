//	Write a program which accept string from user and copy that characters of that string into another string 
//by removing all white spaces.
//	Input : “Marvel lous Pyth on”
//	Output : “MarvellousPython”

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			src++;
		}
		
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[50] = "Marvel lous Pyth on";
	char Brr[50];
	
	StrCpyX(Arr, Brr);
	
	printf("String After Removing all white Spaces :\t %s", Brr);
	
	return 0;
}