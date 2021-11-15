//	Write a program which return second maximum element from singly linear linked list.
//	Input linked list : |110|->|230|->|320|->|240| 
//	Output : 240

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

int SecondMax(PNODE Head)
{
	if(Head->next != NULL)
	{
		int iValue1 = Head->data;
		int iValue2 = Head->next->data;
	
		int Max = 0, sMax = 0;
		if(iValue1 > iValue2)
		{
			Max = iValue1;
			sMax = iValue2;
		}
		else
		{
			Max = iValue2;
			sMax = iValue1;
		}

		Head = Head->next->next;
	
		while(Head != NULL)
		{
			if(Head->data > Max)
			{
				sMax = Max;
				Max = Head->data;
			}
			else if((Head->data < Max) && (Head-> data > sMax))
			{
				sMax = Head->data;
			}
			Head = Head->next;
		}
		return sMax;
	}
	else
	{
		return  Head->data;
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
	
	iRet = SecondMax(first);
	
	printf("Second Maximum : %d", iRet);
	
	return 0;
}