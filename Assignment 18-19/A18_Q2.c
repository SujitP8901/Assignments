//	Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : 1

//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : -1

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			return iCnt;
		}
	}
	return -1;
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
	int * p = NULL;
	
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
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : \t",iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = FirstOcc(p, iSize, iValue);
	
	if(iRet != -1)
	{
		printf("Index of First Occurrence of that %d : %d", iValue, iRet);
	}
	else
	{
		printf("-1");
	}
	
	free(p);
	
	return 0;
}