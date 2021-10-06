//	Write a program which accept string from user and copy the contents of that string into another string. (Implement 
//strcpy() function)
//	Input : “Marvellous Multi OS”
//	Output : “Marvellous Multi OS” in another string

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30] = "Marvellous Multi OS";
	char Brr[30];
	
	strcpyX(Arr, Brr);
	
	printf("Copied String : %s", Brr);
	
	return 0;
}