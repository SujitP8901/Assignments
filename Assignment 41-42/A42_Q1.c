/*
1. Write a program which accepts file name from user and count number of 
capital characters from that file.

Input : Demo.txt

Output : Number of capital characters are 23
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
// Open file in read mode
// Read the data into local array
// Count capital characters
// Close the file
// Return its frequency.
	int fd=0,iRet=0,iSize=0;
	iSize=sizeof(FName);
	char Data[1024];
	
	//printf("Enter a file name:");
	//scanf("%s",FName);
	fd = open(FName,O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to open the file.");
	}
	
	
	
	iRet = read(fd,Data,iSize);
	int iCnt=0;
	
	for(int i=0;i<=Data[1024];i++)
	//while(Data[1024]!='\0')
	{
		if(Data[iRet]>='A' || Data[iRet]<='Z')
		{
			iCnt++;
		}
	}
	return iCnt;
	
	close(fd);
	
}

int main()
{
	char FileName[30];
	int iRet = 0;
	
	printf("Enter file name:");
	scanf("%s",FileName);
	
	iRet = CountCapital(FileName);
	
	printf("Number of Capital characters are %d",iRet);
	
	return 0;
	
	
}