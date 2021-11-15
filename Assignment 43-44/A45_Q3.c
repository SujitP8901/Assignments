//	Write a program which display product of all digits of all element from singly linear linked list. (Don’t consider 0)  
//	Input linked list : |11|->|20|->|32|->|41| 
//	Output : 1 2 6 4

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| -> ", Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

void DisplayProduct(PNODE Head)
{
	int iDigit = 0, iMul = 1, iNo = 0;
	while(Head != NULL)
	{
		iMul = 1;
		iNo = Head->data;
		if(iNo != 0)
		{
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				if(iDigit != 0)
				{
					iMul = iMul * iDigit;
				}
				iNo = iNo / 10;
			}
			printf("%d\t", iMul);
		}
		else
		{
			printf("0\t");
		}
		Head = Head->next;
	}
}

int main()
{
	PNODE first = NULL;
	int iChoice = 1, iValue = 0, iRet = 0;

	while(iChoice != 0)
	{
		printf("Enter the Value of the Node : \n");
		scanf("%d", &iValue);
		
		InsertFirst(&first, iValue);
		
		printf("Do You Want to Continue (1/0) : ");
		scanf("%d", &iChoice);
	}
	
	Display(first);
	
	DisplayProduct(first);
	
	return 0;
}