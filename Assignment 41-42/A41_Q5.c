/*
5. Write application which accept file name from user and one string from user. Write 
that string at the end of file.
Input : 
Demo.txt
Hello World

Output : Write Hello World at the end of Demo.txt file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,fd2;
	char fName[30];
	
	printf("Enter a file name: ");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR);
	
	if(fd == -1)
	{
		printf("File cannot be found!!");
	}
	
	else
	{
		char Data[40];
		lseek(fd,16,SEEK_CUR);
		
		printf("Data to be witten is: %s",Data);
		read(fd,Data,11);
		fd2[Data] = write(1,fName,11);
		
		
		//printf("File size is: %d",fd2);
	}
	close(fd);
	return 0;
}