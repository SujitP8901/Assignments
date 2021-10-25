//	Write application which accept file name from user and read all data from that file and display contents on screen.
//	Input : Demo.txt
//	Output : Display all data of file.

#include<stdlib.h>
#include<stdio.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Buffer[1024];
	
	printf("Enter Name of File : \n");
	scanf("%s", Fname);
	
	fd = open(Fname, O_RDONLY);
	
	while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		write(1, Buffer, iRet);
	}
	
	close(fd);
	return 0;
}