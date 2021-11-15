//	Write a program which search last occurrence of particular element from singly linear linked list. 
//	Function should return position at which element is found.

//	Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
//	Input element : 30 
//	Output : 6

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
		printf("|%d| -> ",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int SearchLastOcc(PNODE Head, int num)
{
	int iCnt = 1, iIndex = 0;
	while(Head != NULL)
	{
		if(Head->data == num)
		{
			iIndex = iCnt;
		}
		iCnt++;
		Head = Head->next;
	}
	
	return iIndex;
}

int main()
{
	PNODE first = NULL;
	int iValue = 0, iChoice = 1, iRet = 0, iNo = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the Value of Node : \n");
		scanf("%d", &iValue);
		
		InsertFirst(&first, iValue);
		
		printf("Do You Want Continue (1/0) : ");
		scanf("%d", &iChoice);
	}
	
	Display(first);
	
	printf("Enter Value that You Want to Search : \n");
	scanf("%d", &iNo);
	
	iRet = SearchLastOcc(first, iNo);
	
	if(iRet != 0)
	{
		printf("Last Occurence : %d", iRet);
	}
	else
	{
		printf("Number is not present in Linked List");
	}
	
	return 0;
}