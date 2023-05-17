#include<stdio.h>
#include<stdlib.h>
//creation
struct node{
int data;
struct node *next;
};
struct node *head = 0;
struct node*tail = 0;
void create(){
	int choice = 1;
struct node *newnode;
while(choice){
newnode = (struct node*)malloc(sizeof(struct node));
//a newnode is created in the list
//ask for a data input
printf("enter the data");
scanf("%d",&newnode->data);
//check if the list is empty
if(head == 0){
    head = newnode;
    tail = newnode;
    tail->next = newnode;
}
else{
    tail->next = newnode;
    tail = newnode;
    tail->next = head;
}
printf("press 1 to continue and 0 to exit");
scanf("%d",&choice);
}

}
void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
             //Prints each node by incrementing pointer.  
            printf("%d ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  
      
int main()  
{  
    //Adds data to the list  
   create();    
   //Displays all the nodes present in the list  
   display();  
     
   return 0;  
}  

