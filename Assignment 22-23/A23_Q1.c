//	Write a program which accept string from user and convert it into lower case.
//	Input : “Marvellous Multi OS”
//	Output : marvellous multi os

#include<stdio.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = (*str) + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[50];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("Modified string : %s",Arr);
	
	return 0;
}