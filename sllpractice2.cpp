#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *newnode,*temp;
struct node *head = 0;
int choice = 1;
void create(){
	while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
printf("enter the data to be inserted:");
scanf("%d",&newnode->data);
newnode->next = 0;
if(head == 0){
head = temp = newnode;
}
else{
	temp->next = newnode;
	temp = newnode;
}
printf("do you want to continue:");
scanf("%d",&choice);
}
printf("\nthe linked list is created\n");
}
void display(){
	temp = head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
void insertatfront(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter the data to be inserted:\n");
	scanf("%d",&newnode->data);
		newnode->next = head;
		head = newnode;
	printf("\nthe linked list created after insertion at front:\n");
	display();
	
}
void insertatend(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter the data to be inserted\n");
	scanf("%d",&newnode->data);
	temp = head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next = newnode;
	newnode->next = 0;
	display();
	
}
void insertatpos(){
	int pos;
	printf("\nenter the position after which newnode to be inserted\n");
	scanf("%d",&pos);
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter the data to be inserted\n");
	scanf("%d",&newnode->data);
	temp = head;
	for(int i=1;i<pos;i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	display();
}
void deleteatbeg(){
	temp = head;
	struct node *ptr;
	ptr = head;
	ptr = ptr->next;
	head = ptr;
	free(temp);
	printf("\nlist after deletion\n");
	display();
	
}
void deleteatend(){
	struct node *ptr;
	ptr = head;
	ptr = ptr->next;	
	temp = head;
	while(temp->next!=0)
	{
		temp = temp->next;
	}
	while(ptr->next!=0){
	if(ptr->next = temp)
	{
		ptr->next = 0;
	}
}
	free(temp);
	printf("\nlist after deletion:\n");
	display();
}
void deleteatpos()
{
	struct node *ptr;
	ptr = head;
	int pos;
	printf("enter the position at which node has to be deleted:");
	scanf("%d",&pos);
	temp = head;
	for(int j=1;j<pos-1;j++)
	{
		ptr = ptr->next;
	}
	for(int i=1;i<pos;i++)
	{
		temp = temp->next;
	}
	ptr->next = temp->next;
	free(temp);
	printf("\nthe linked list after deletion is \n");
	display();
}
	void sort(){
		int sample;
	struct node *ptr;
		for(temp = head;temp->next!=0;temp = temp->next)
		{
			for(ptr = temp->next;ptr!=0;ptr=ptr->next)
			{
				if(temp->data > ptr->data)
				{
					sample = temp->data;
					temp->data = ptr->data;
					ptr->data = sample;
				}
			}
		}
		temp = head;
		while(temp->next!=0){
		printf("%d",temp->data);
	}
}

int main(){
	create();
	display();
	//insertatfront();
	//insertatend();
	//insertatpos();
	//deleteatbeg();
	//deleteatend();
	//deleteatpos();
	sort();
}

