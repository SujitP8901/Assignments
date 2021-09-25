//	Accept N numbers from user and accept one another number as NO , check whether NO is present or not.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : TRUE

//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : FALSE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	int * p = NULL;
	bool bRet = false;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable to allocate the Memory");
		return -1;
	}
	
	printf("Enter %d Elements : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : \t",iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p, iSize, iValue);
	
	if(bRet == true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	free(p);
	
	return 0;
}