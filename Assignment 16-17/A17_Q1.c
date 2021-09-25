//	Accept N numbers from user and return frequency of even numbers.
//	Input : N : 6
//	Elements :85 66 3 80 93 88
//	Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iCnt = 0, iEven = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEven++;
		}
	}
	return iEven;
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
		printf("Unable to allocate the Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d :\t", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = CountEven(p, iSize);
	
	printf("Frequency of even numbers is : %d",iRet);
	
	free(p);
	
	return 0;
}
