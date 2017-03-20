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
void search()
{
	int value;
	scanf("%d", &value);
	struct node* temp;
	temp = head;
	
	int count=1;
	while(temp!=NULL)
	{
		if(temp->data == value)
		{
			printf(" %d is present in the position %d\n", temp->data, count);
			temp=temp->next;
			count++;
		printf(" %d lies next to the matched node in position %d\n", temp->data, count);
		break;
		}
		temp=temp->next;
		count++;
	}
	
	 if(temp==NULL)
	{
		printf(" %d does not exist", value);
		
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
	
	search();
	return 0;
}
