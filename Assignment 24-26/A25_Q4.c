// 	Write a program which accept string from user and copy small characters of that string into another string.
//	Input : “Marvellous multi OS”
//	Output : “arvellous multi”

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if(((*src >= 'a') && (*src <= 'z')) || (*src == ' '))
		{
			*dest = *src;
			dest++;
		}
		src++;
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
	
	printf("String of Small Letters : %s", Brr);
	
	return 0;
}