//	Write a program which accepts file name from user and count number of small characters from that file.
//	Input : Demo.txt
//	Output : Number of small characters are __
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountSmall(char Fname[])
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
			if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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
	char str[30];
	
	printf("Enter File Name : \n");
	scanf("%s", str);
	
	iRet = CountSmall(str);
	
	printf("Count of Small Letters is : %d", iRet);
	
	return 0;
}