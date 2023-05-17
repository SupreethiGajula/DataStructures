#include<stdio.h>
#include<stdlib.h>
struct node {
int info;
struct node *prev,*next;
};
struct node *start = NULL;
//traversal
//check whether the list is empty
void traversal()
{
    if(start = NULL)
    {
        printf("linked list is invalid");
        return;

    }
    //else print the data
    struct node *temp;
    temp = start;
    while(temp!=NULL){
        printf("data is %d",temp->info);
        temp = temp->next;
    }
}
//function to insert at front
void insertatfront()
{
    int data;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted:");
    scanf("%d",data);
    temp->info = data;
    temp->next =start;
    temp->prev = NULL;
    start = temp;

}
//function to insert at the end
void insertatend()
{
    int data;
    struct node *trav,*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->prev = NULL;
    printf("enter the number to be inserted:");
    scanf("%d",data);
    temp->info = data;
    temp->next = NULL;
    trav = start;
    //if start is null
    if(start = NULL)
    {
        start = temp;
    }
    else{
        while(trav->next!=NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}
//function to insert at a position
void insertatpos()
{
    int data,pos,i=1;
    struct node *temp,*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;
    //enter the position to be inserted
    printf("enter the position:");
    scanf("%d",pos);
    //if start is NULL
    if(start = NULL)
    {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
    //if position is 1
    else if(pos == 1)
    {
        insertatfront();
    }
    //change links
    else{
        printf("enter the data to be inserted");
        scanf("%d",data);
        temp = start;
        while(i<pos-1){
            temp = temp->next;
            i++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    temp->next->prev = newnode;
}
}
//function to delete from the linked list
void deletefirst()
{
    struct node *temp;
    if(start == NULL){
        printf("the list is empty");
    }
    else{
        temp = start;
        start->next = start;
        if(start!=NULL)
            start->prev = NULL;
        free(temp);
    }
}
//function to delete from the end of the linked list
void deletelast()
{
    struct node *temp;
    if(start == NULL)
        printf("the list is empty");
    temp = start;
    while(temp->next!=NULL)
        temp = temp->next;
    if(start->next == NULL)
        start = NULL;
    else{
        temp->prev->next = NULL;
        free(temp);
    }
}
//function to delete from a specified position
void deleteposition()
{
    int pos,i=1;
    struct *node ,*position;
    temp = start;
    //if dll is empty
    if(start == NULL)
        printf("the list is empty");
    //otherwise
    else{
        //position to be deleted
        printf("enter the position to be deleted:");
        scanf("%d",pos);
        //if position is first
        if(pos==1)
            deletefirst();
        if (start != NULL) {
                start->prev = NULL;
            }
            free(position);
            return;
        }
         // Traverse till position
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        // Change Links
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;
 
        // Free memory
        free(position);
    }
    // Driver Code
int main()
{
    int choice;
    while (1) {
 
        printf("\n\t1  To see list\n");
        printf("\t2  For insertion at"
               " starting\n");
        printf("\t3  For insertion at"
               " end\n");
        printf("\t4  For insertion at "
               "any position\n");
        printf("\t5  For deletion of "
               "first element\n");
        printf("\t6  For deletion of "
               "last element\n");
        printf("\t7  For deletion of "
               "element at any position\n");
        printf("\t8 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
 
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}

