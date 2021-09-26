//	Accept N numbers from user and return product of all odd elements.
//	Input : N : 6
//	Elements :15 66 3 70 10 88
//	Output : 45

//	Input : N : 6
//	Elements :44 66 72 70 10 88
//	Output : 0

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int iCnt = 0, iMul = 1, iEven = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iMul = iMul * Arr[iCnt];
		}
		else
		{
			iEven++;
		}
	}
	if(iMul == iEven)
	{
		return 0;
	}
	else
	{
		return iMul;
	}

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
	
	printf("Enter %d Elements : \n", iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : \t",iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Product(p, iSize);
	
	printf("Product of Odd Numbers is : %d", iRet);
	
	free(p);
	
	return 0;
}
