//	Write application which accept file name from user and create that file.
//	Input : Demo.txt
//	Output : File created successfully

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter File Name : \n");
	scanf("%s", Fname);
	
	fd = creat(Fname, 0777);
	
	if(fd == -1)
	{
		printf("Unable to Create File.");
		return -1;
	}
	else
	{
		printf("File Created Successfully with FD : %d", fd);
	}
	
	return 0;
}