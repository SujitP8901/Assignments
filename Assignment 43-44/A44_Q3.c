//	Write a program which returns addition of all even element from singly linear linked list. 
//	Input linked list : |11|->|20|->|32|->|41| 
//	Output : 52

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

int AdditionEven(PNODE Head)
{
	int evenSum = 0;
	
	while(Head != NULL)
	{
		if((Head->data % 2) == 0)
		{
			evenSum = evenSum + Head->data;
		}
		Head = Head->next;
	}
	return evenSum;
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
	
	iRet = AdditionEven(first);
	
	printf("Addition of Even Elements : %d", iRet);
	
	return 0;
}