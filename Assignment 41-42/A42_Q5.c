//	Write a program which accepts file name and one count from user and read that number of characters from starting position.
//	Input : Demo.txt 12
//	Output : Display first 12 characters from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

void  DisplayN(char Fname[], int N)
{
	int fd = 0, iAns = 0, i = 0, iCnt = 0;
	char Buffer[1024];
	
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open File\n");
		return;
	}
	
	while((iAns = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		for(i = 0; i < iAns; i++)
		{
			printf("%c", Buffer[i]);
			iCnt++;
			if(iCnt == N)
			{
				break;
			}
		}
	}
}

int main()
{
	int iRet = 0, iValue = 0;
	char str[30];
	
	printf("Enter File Name : \n");
	scanf("%s", str);
	
	printf("Enter Value : \n");
	scanf(" %d", &iValue);
	
	DisplayN(str, iValue);
	
	return 0;
}