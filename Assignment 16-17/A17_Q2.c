//	Accept N numbers from user and return difference between frequency of even number and odd numbers.
//	Input : N : 7
//	Elements :85 66 3 80 93 88 90
//	Output : 1 (4 -3)

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iLength)
{
	int iCnt = 0, iEven = 0, iOdd = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEven++; 
		}
		else
		{
			iOdd++;
		}
	}
	
	return (iEven-iOdd);
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int * p = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);

	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable to allocate Memory \n");
		return -1;
	}
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d :\t", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = FrequencyDiff(p, iSize);
	
	printf("Difference between Frequency of Even number and Odd numbers is : %d",iRet);
	
	return 0;
}
