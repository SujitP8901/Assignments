//	Write a program which accepts file name from user and count number of capital characters from that file.
//	Input : Demo.txt
//	Output : Number of capital characters are __

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int CountCapital(char Fname[])
{
	int fd = 0, i = 0, iCnt = 0, iRes = 0;
	char Buffer[1024];
	
	fd = open(Fname, O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((iRes = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		for(i = 0; i < iRes; i++)
		{
			if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
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
	scanf("%s",str);
	
	iRet = CountCapital(str);
	
	printf("Count of Capital Letter is : %d", iRet);
	return 0;
}