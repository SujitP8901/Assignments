//	Accept N numbers from user check whether that numbers contains 11 in it or not.
//	Input : N : 6
//	Elements :85 66 11 80 93 88
//	Output : 11 is present

//	Input : N : 6
//	Elements :85 66 3 80 93 88
//	Output : 11 is absent

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int iSize = 0, iCnt = 0;
	bool bRet = false;
	int * p = NULL;
	
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
		printf("Enter Element %d :\t", iCnt + 1);
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p, iSize);
	
	if(bRet == true)
	{
		printf("11 is Present\n");
	}
	else
	{
		printf("11 is Absent\n");
	}
	
	free(p);
	return 0;
}
