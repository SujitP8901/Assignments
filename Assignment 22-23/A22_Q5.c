//	Write a program which accept string from user and display it inn reverse order.
//	Input : “MarvellouS”
//	Output : “SuollevraM”

#include<stdio.h>

void Reverse(char *str)
{
	int iSize = 0; 
	char *ptr = NULL;
	ptr = str;
	ptr--;
	while(*str != '\0')
	{
		str++;
	}
	str--;
	
	while(*str != *ptr)
	{
		printf("%c",*str);
		str--;
	}
}

int main()
{
	char Arr[50];
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);

	Reverse(Arr);
	
	return 0;
}