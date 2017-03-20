#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
struct node* createnode()
{
	int val;
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d", &val);
	newnode->data = val;
	newnode->next = NULL;
	return newnode;
}
void add()
{
	struct node *newnode,*tail;
	newnode=createnode();
	
	if(head == NULL)
	{
		head=newnode;
		tail = head;
		return;
	}
	
	if(tail->next == NULL)
	{
		tail->next = newnode;
		tail = newnode;
	}
	
}
void search(int _value)
{
	struct node* temp;
	temp = head;
	
	int count=1;
	while(temp!=NULL)
	{
		if(temp->data == _value)
		{
		printf(" %d is present in the position %d", temp->data, count);
		break;
		}
		temp=temp->next;
		count++;
	}
	
	 if(temp==NULL)
	{
		printf(" %d does not exist", _value);
		
	}
}
int main()
{
	head=NULL;
	int i,value,num;
	printf("Enter the number of elements\n");
	scanf("%d", &num);
	printf("\nEnter the elements\n");
	for(i=0;i<num;i++)
	{
		add();
		
	}
	printf("\nEnter the value to be searched\n");
	scanf("%d", &value);
	search(value);
	return 0;
}
