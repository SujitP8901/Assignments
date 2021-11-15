//	Write a program which displays all elements which are perfect from singly linear linked list. 
//Function Prototype :
//int DisplayPerfect( PNODE Head); 
//	Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
//	Output : 6 28

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool isPerfect(int num)
{
	int i = 0, iSum = 0;
	for(i = 1; i <= num/2; i++)
	{
		if((num % i) == 0)
		{
			iSum = iSum + i;
		}
	}
	
	if(iSum == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DisplayPerfect(PNODE Head)
{
	while(Head != NULL)
	{
		if(isPerfect(Head->data))
		{
			printf("%d\t", Head->data);
		}
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
	
	printf("Perfect Numbers in Linked List : \n");
	
	DisplayPerfect(first);
	
	return 0;
}