//	Accept N numbers from user and display all such elements which are multiples of 11.
//	Input : N : 6
//	Elements :85 66 3 55 93 88
//	Output : 66 55 88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] % 11 == 0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int * p  = NULL;
	
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
		printf("Enter Element %d :\t",iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Elements which are multiples of 11 are : \n");
	Display(p, iSize);
	
	free(p);
	
	return 0;
}