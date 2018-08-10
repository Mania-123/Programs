#include<stdio.h>
/* Demonstration of linked list */

struct node   /* creating node*/
{
	int i;
	struct node *next;
};

//Done by kk

int insert_at_begin(int data,struct node *head)
{
	
	
	struct node *new=(struct node *)malloc(sizeof(struct node));
	new->next=head;
	head=new;
}

int insert_at_end(int data,struct node *head)
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	struct node *temp=head;
	
	while(temp->next)
	{
		temp=temp->next;
			
	}

	temp->next=new;
	new->next='\0';
	
}

int main()
{
	char c;
	int d;
	struct node *head='\0';
	head=(struct node *)malloc(sizeof(struct node));
	printf("choose B to insert at begining or choose E to insert at end\n");
	scanf("%c",&c);

	switch(c)
	case 'B': 
	printf("enter the data value \n",d);/*This edited by me*/
	scanf("%d",&d);
	insert_at_begin(d,head);
}
