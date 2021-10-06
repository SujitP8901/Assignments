//	Write a program which accept string from user reverse that string in place.
//	Input : “abcd”
//	Output : “dcba”

//	Input : “abba”
//	Output : “abba”

#include<stdio.h>

void strRevX(char *str) 
{
	char * ptr = NULL;
	int iCnt = 0;
	ptr = str;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	str--;
	
	int iLimit = 0;
	while(iLimit < iCnt / 2)
	{
		char temp = *str;
		*str = *ptr;
		*ptr = temp;
		
		str--;
		ptr++;
		iLimit++;
	}
}

int main()
{
	char Arr[50];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);
	
	strRevX(Arr);
	
	printf("Modified String : %s", Arr);
	
	return 0;
}