//	Write a program which 2 strings from user and concat second string after first string. 
//	(Implement strcat() function).
//	Input : “Marvellous Infosystems”
//			“Logic Building”
//	Output : “Marvellous Infosystems Logic Building”
#include<stdio.h>

void StrCatX(char *src, char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	*src = ' ';
	src++;
	
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';	
}

int main()
{
	char Arr[50];
	char Brr[50];
	
	printf("Enter First String : \n");
	scanf("%[^'\n']s", Arr);
	
	printf("Enter Second String : \n");
	scanf(" %[^'\n']s", Brr);
	
	StrCatX(Arr, Brr);
	
	printf("Concateneted String :\t %s",Arr);
	
	return 0;
}