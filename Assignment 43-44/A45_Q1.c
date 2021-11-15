//	Write a program which reverse each element of singly linked list.
//	Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
//	Output : |11|->|82|->|71|->|14|->|6|->|98|

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

void Reverse(PPNODE Head)
{
	PNODE temp = *Head;
	int iNo = 0, iModify = 0, iDigit = 0; 
	while(temp != NULL)
	{
		iModify = 0;
		iNo = temp->data;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iModify = (10 * iModify) + iDigit;
			iNo = iNo / 10;
		}
		temp->data = iModify;
		temp = temp->next;
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
	
	Reverse(&first);
	
	Display(first);
	
	return 0;
}