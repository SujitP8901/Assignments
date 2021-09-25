//	Accept N numbers from user and display all such numbers which contains 3 digits in it.
//	Input : N : 6
//	Elements :8225 665 3 76 953 858
//	Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0, iDigit = 0, iTemp = 0, iNo = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{	
		iDigit = 0;
	
		iNo = Arr[iCnt];
		iTemp = Arr[iCnt];
		
		while(iNo > 0)
		{
			iDigit++;
			iNo = iNo / 10;
		}
		
		if(iDigit == 3)
		{
			printf("%d\t",iTemp);
		}
		
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable to allocate Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements : \n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d : \t", iCnt + 1);
		scanf("%d", &p[iCnt]);
	}
	
	printf("Numbers which contains 3 Digits in it are : \n");
	Digits(p, iSize);
	
	free(p);
	
	return 0;
}