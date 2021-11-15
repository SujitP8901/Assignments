//	Write a program which return largest element from singly linear linked list.  
//	Input linked list : |110|->|230|->|320|->|240| 
//	Output : 320

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

int Maximum(PNODE Head)
{
	int iMax = Head->data;
	Head = Head->next;
	
	while(Head != NULL)
	{
		if(Head->data > iMax)
		{
			iMax = Head->data;
		}
		Head = Head->next;
	}
	
	return iMax;
}

int main()
{
	PNODE first = NULL;
	int iValue = 0, iChoice = 1, iRet = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the Value of Node : \n");
		scanf("%d", &iValue);
		
		InsertFirst(&first, iValue);
		
		printf("Do You Want to Continue(1/0) : ");
		scanf("%d", &iChoice);
	}
	
	Display(first);
	
	iRet = Maximum(first);
	printf("Maximum Number in the Linked List : %d", iRet);
	
	
	return 0;
}