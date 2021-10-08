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
	char Arr[50];
	char Brr[50];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);
	
	StrCpyX(Arr, Brr);
	
	printf("String After Removing all white Spaces :\t %s", Brr);
	
	return 0;
}