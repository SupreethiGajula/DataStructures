#include<stdio.h>
int MAXSIZE = 4;
int stack[4];
int top = -1;
void push()
 {
 int val;
 if(top==MAXSIZE-1)
 {
 printf("\nStack is full!!");
 }
 else
 {
 printf("\nEnter element to push:");
 scanf("%d",&val);
 top=top+1;
 stack[top]=val;
 }
 }
 void pop()
 {
 if(top==-1)
 {
 printf("\nStack is empty!!");
 }
 else
 {
 printf("\nDeleted element is %d",stack[top]);
 top=top-1;
 }
 }
 void display()
 {
 int i;
 if(top==-1)
 {
 printf("\nStack is empty!!");
 }
 else
 {
 printf("\nStack is...\n");
 for(i=top;i>=0;--i)
 printf("%d\n",stack[i]);
 }
 } 
int main()
{
	push();
	push();
	pop();
	display();
}
