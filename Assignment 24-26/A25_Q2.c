//	Write a program which accept string from user and copy the contents of that string into another string. (Implement 
//	strncpy() function)
//	Input : “Marvellous Multi OS”
//			10
//	Output : “Marvellous
//	Note : If third parameter is greater than the size of source string then copy whole string into destination.

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iNo)
{
	while((*src != '\0') && iNo != 0)
	{
		*dest = *src;
		dest++;
		src++;
		iNo--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[50];
	char Brr[50];
	int iValue = 0;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("Number of Characters You Want to Copy : \n");
	scanf("%d",&iValue);
	
	StrNCpyX(Arr, Brr, iValue);
	
	printf("Result : \t %s", Brr);
	
	return 0;
}