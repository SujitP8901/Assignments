//	Accept N numbers from user and accept one another number as NO , return frequency of NO form it.
//	Input : N : 6
//	NO: 66
//	Elements :85 66 3 66 93 88
//	Output : 2

//	Input : N : 6
//	NO: 12
//	Elements :85 11 3 15 11 111
//	Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0, iFreq = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFreq++;
		}
	}
	return iFreq;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
	int * p = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);

	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable to allocate Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d :\t", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Frequency(p, iSize, iValue);
	
	printf("Frequency of %d is : %d", iValue, iRet);
	
	free(p);
	
	return 0;
}
