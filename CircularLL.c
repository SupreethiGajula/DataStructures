
#include<stdio.h>
#include<stdlib.h>
//creation
struct node{
int data;
struct node *next;
};
struct node *head = 0;
void create(){
int choice = 1;
while(choice){
struct node *newnode,*temp;
newnode = (struct node*)malloc(sizeof(struct node));
//a newnode is created in the list
//ask for a data input
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next = 0;
if(head == 0)
{
head = temp = newnode;
}
else
{
temp->next = newnode;
temp = newnode;
}
temp->next = head;
printf("press 1 to continue and 0 to exit");
scanf("%d",&choice);
}
}
void display()
{
struct node *temp;
if(head == 0)
{
printf("the list is empty");
}
else
{
temp = head;
while(temp->next!=head)
{
printf("%d",&temp->data);
temp = temp->next;
}
printf("%d",temp->data);
}}
int main(){
create();
display();
}
