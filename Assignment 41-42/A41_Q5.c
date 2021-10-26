//	Write application which accept file name from user and one string from user. Write that string at the end of file.
//	Input : Demo.txt
//			Hello World
//	Output : Write Hello World at the end of Demo.txt file

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Input[30];
	
	printf("Enter File Name : \n");
	scanf("%s", Fname);
	
	printf("Enter Input : \n");
	scanf("%s", Input);
	
	fd = open(Fname, O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		printf("Unable to open File");
		return -1;
	}
	
	write(fd, Input, strlen(Input));
	
	return 0;
}

