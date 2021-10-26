//	 Write a program which accepts file name and one character from user and count number of occurrences of that characters from that file.
//	Input : Demo.txt ‘M’
//	Output : Frequency of M is 7

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char Fname[], char ch)
{
	int fd = 0, iAns = 0, i = 0, iCnt = 0;
	char Buffer[1024];
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to Open File\n");
		return -1;
	}
	
	while((iAns = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		for(i = 0; i < iAns; i++)
		{
			if(Buffer[i] == ch)
			{
				iCnt++;
			}
		}
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char cValue = '\0';
	char str[30];
	
	printf("Enter File Name : \n");
	scanf("%s", str);
	
	printf("Enter Character : \n");
	scanf(" %c", &cValue);
	
	iRet = CountChar(str, cValue);
	
	printf("Frequency of %c is : %d", cValue, iRet);
	
	return 0;
}