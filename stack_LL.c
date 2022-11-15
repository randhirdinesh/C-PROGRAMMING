
#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop();
void status();

struct node
	{
	int data;
	struct node *next;
	};
struct node *head,*new,*temp,*prev;

void push(int x)
{
 new = (struct node*)malloc(sizeof(struct node));
 if(head==NULL)
 {
  new->data=x;
  new->next=NULL;
  head=new;
 }
 else
 {
  new->data=x;
  new->next=head;
  head=new;
 }
 printf("\n\t\t\t---INSERTED SUCCESSFULLY--!!!");
}

int pop()
{
 int item;
 if(head==NULL)
 {
  printf("\n\t\t\t---STACK UNDERFLOW---!!!");
  return 0;
 }
 else
 {
  item=head->data;
  prev=head;
  head=head->next; 
  free(prev);
  printf("\n\t\t\t---ITEM POPPED---!!!");
  return item;
 }
}

void status()
{
 temp=head;
 if(temp==NULL)
 {
  printf("\n\t\t\t---STACK UNDERFLOW---!!!");
 }
 else
 {
  while(temp!=NULL)
  {
   printf("%d ",temp->data);
   temp=temp->next;
  }
 }
}


void main()
{
int i,x,pos,ch;

head=(struct node *)malloc(sizeof(struct node));
temp=head;

while(1)
{
printf("\n\n\nSTACK OPERATIONS");
printf("\n-------------------");
printf("\n\n1. Push into the stack");
printf("\n\n2. Pop from the stack");
printf("\n\n3. Status of the stack");
printf("\n\n\nEnter your choice:\t");
scanf("%d",&ch);  

switch(ch)
{
case 1:
	{
	 printf("\n\n1.Push into the stack");
	 printf("\n\nEnter the element to be inserted:\t");
	 scanf("%d",&x);
	 push(x);
	 break;
	}
case 2:
	{
	 printf("\n\n2.Pop into the stack");
	 printf("%d",pop());
	 break;
	}
case 3:
	{
	 printf("\n3.Status of the stack\t\t\t");
	 status();
	 break;
	}
default:
	{
	 exit(1);
	}
}
}
}

    
