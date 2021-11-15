//	Write a program which display smallest digits of all element from singly linear linked list.
//	Input linked list : |11|->|250|->|532|->|415| 
//	Output : 1 0 2 1

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
		*Head  = newn;
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

void DisplaySmall(PNODE Head)
{
	int iMin = 0, iDigit = 0, iNo = 0;
	
	while(Head != NULL)
	{
		iMin = 10;
		iNo = Head->data;
		if(iNo != 0)
		{
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				if(iDigit < iMin)
				{
					iMin = iDigit;
				}
				iNo = iNo / 10;
			}
			printf("%d\t", iMin);
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
	
	DisplaySmall(first);
	
	return 0;
}