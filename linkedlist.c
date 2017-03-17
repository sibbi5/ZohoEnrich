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
	scanf("%d",&val);
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
	while(temp!=NULL && temp->data!=_value)
	{
		temp=temp->next;
		count++;
	}
	if(temp->data == _value)
	{
		printf(" %d is present in the %drd position", temp->data, count);
	}
	if(temp==NULL)
	{
		printf(" %d does not exist", _value);
	}
}
void main()
{
	head=NULL;
	int i,num,value;
	printf("Enter the number of elements");
	scanf("%d",&num);
	printf("Enter the elements");
	for(i=0;i<num;i++)
	{
		add();
	}
	//printf("%d\n", head->data);
	printf("Enter the value to be searched");
	scanf("%d", &value);
	search(value);
}
