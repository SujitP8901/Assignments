//	Write a program which returns addition of all element from singly linear linked list. 
//	Input linked list : |10|->|20|->|30|->|40| 
//	Output : 100

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

int Addition(PNODE Head)
{
	int iSum = 0;
	while(Head != NULL)
	{
		iSum = iSum + Head->data;
		Head = Head->next;
	}
	return iSum;
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
	
	iRet = Addition(first);
	printf("Addition of Elements in Linked List : %d", iRet);
	
	
	return 0;
}