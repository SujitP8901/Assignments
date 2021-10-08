//	Write a program which accept string from user and copy that characters of that string into another string 
//by converting all capital characters into small case.
//	Input : “Marvellous Python 2”
//	Output : “marvellous python 2”

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *src + 32;
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
	
	StrCpySmall(Arr, Brr);
	
	printf("Modified String :\t %s",Brr);
	
	return 0;
}