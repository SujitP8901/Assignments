//	Write application which accept file name from user and display size of file.
//	Input : Demo.txt
//	Output : File size is 56 bytes

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd = 0, iRet = 0, iSize = 0;
	char Fname[30];
	char Buffer[1024];

	printf("Enter Name of File : \n");
	scanf("%s", Fname);
	
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open File");
		return -1;
	}
	else
	{
		printf("File Opened Successfully with FD : %d\n", fd);
	}
	
	while((iRet  = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		iSize = iSize + iRet;
	}
	
	printf("Size of File : %d\n", iSize);
	
	return 0;
}