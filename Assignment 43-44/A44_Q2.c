//	Write a program which displays all elements which are prime from singly linear linked list.
//	Input linked list : |11|->|20|->|17|->|41|->|22|->|89| 
//	Output : 11 17 41 89

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node * next;
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

void DisplayPrime(PNODE Head)
{
	int iCnt = 0;
	bool bFlag = true;
	while(Head != NULL)
	{
		for(iCnt = 2; iCnt <= (Head->data)/2; iCnt++)
		{
			if((Head->data % iCnt) == 0)
			{
				bFlag = false;
				break;
			}
		}
		
		if(bFlag == true)
		{
			printf("%d\t", Head->data);
		}
		
		bFlag = true;
		Head = Head->next;
	}
}

int main()
{
	PNODE first = NULL;
	int iChoice = 1, iValue = 0;

	while(iChoice != 0)
	{
		printf("Enter the Value of the Node : \n");
		scanf("%d", &iValue);
		
		InsertFirst(&first, iValue);
		
		printf("Do You Want to Continue (1/0) : ");
		scanf("%d", &iChoice);
	}
	
	Display(first);
	
	printf("Prime Numbers in Linked List : \n");
	DisplayPrime(first);
}