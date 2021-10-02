//	Write a program which accept string from user and return difference between frequency of small characters and frequency of 
//	capital characters.
//	Input : “MarvellouS”
//	Output : 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
	int cCount = 0, sCount = 0;
	
	while(*str  != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			cCount++;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			sCount++;
		}
		str++;
	}
	return (sCount - cCount);
}

int main()
{
	char Arr[50];
	int iRet = 0;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Difference(Arr);
	
	printf("Difference Between Frequency of Small and Capital Characters is : %d",iRet);
	
	return 0;
}