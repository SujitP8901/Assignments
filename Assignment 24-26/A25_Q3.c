//	Write a program which accept string from user and copy capital characters of that string into another string.
//	Input : “Marvellous Multi OS”
//	Output : “MMOS”

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src;
			*dest++;
		}
		*src++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[50];
	char Brr[50];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);
	
	StrCpyCap(Arr, Brr);
	
	printf("String of Capital Letters : %s", Brr);
	
	return 0;
}