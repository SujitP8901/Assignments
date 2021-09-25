//	Accept N numbers from user and return the smallest number.
//	Input : N : 6
//	Elements :85 66 3 66 93 88
//	Output : 3

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int iCnt = 0, iMin = 0;
	iMin = Arr[0];
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int* p = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable to allocate the Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements : \n", iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : \t", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Minimum(p, iSize);
	
	printf("Minimum Number is : %d",iRet);
	
	free(p);
	
	return 0;
}