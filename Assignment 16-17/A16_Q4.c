//	Accept N numbers from user and display all such elements which are divisible by 3 and 5.
//	Input : N : 6
//	Elements :85 66 3 15 93 88
//	Output : 15

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int* p = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("Unable allocate Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Element %d :\t",iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Elements which are divisible by 3 and 5 are : \n");
	Display(p, iSize);
	
	free(p);
	
	return 0;
}
