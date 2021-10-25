//	Write application which accept file name from user and open that file in read mode.
//	Input : Demo.txt
//	Output : File opened successfully.

#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];

	printf("Enter File Name : \n");
	scanf("%s", Fname);
	
	creat(Fname, 0777);
	
	fd = open(Fname, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;		// Return to OS
	}
	else
	{
		printf("File Successfully Opened with FD : %d\n", fd);
	}
	
	return 0;
}