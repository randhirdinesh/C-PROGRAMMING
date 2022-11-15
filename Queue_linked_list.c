

#include<stdio.h>
#include<stdlib.h>
void enqueue(int);					//function declaration
int dequeue();
void display();

struct node
	{
	int data;
	struct node *next;
	};
struct node *head,*new,*temp,*prev;

void enqueue(int x)					//function to insert the element to the queue
{
 new = (struct node*)malloc(sizeof(struct node));
 new->data=x;
 if(head==NULL)
 {
  new->next=NULL;
  head=new;
 }
 else
 {
  temp=head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  new->data=x;
  new->next=NULL;
  temp->next=new;
 }
 printf("\n\n\t---INSERTED--!!!");
}

int dequeue()						//function to delete the element to the queue
{	
 int item;
 if(head==NULL)
 {
  printf("\n\n\t---UNDERFLOW---!!!");
  return 0;
 }
 else
 {
  item=head->data;
  prev=head;
  head=head->next;
  free(prev);
  printf("\n\n\t---ITEM DELETED---!!!:");
  return item;
 }
}

void display()						//function to print the elements of the queue			
{
 temp=head;
 if(temp==NULL)
 {
  printf("\n\n\t---UNDERFLOW---!!!");
 }
 else
 {
  printf("\n\n\tTHE QUEUE ELEMENTS ARE:\t");
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

while(1)
{
printf("\n\n\t\t\tQUEUE OPERATIONS");
printf("\n\t\t\t-----------------------");
printf("\n\t\t1. INSERT INTO THE QUEUE");
printf("\n\t\t2. DELETE FROM THE QUEUE");
printf("\n\t\t3. DISPLAY THE QUEUE");
printf("\n\n\t\tENTER YOUR CHOICE:\t");
scanf("%d",&ch);

switch(ch)
{
case 1:
	{
	 printf("\n\t\t1. INSERT INTO THE QUEUE");
	 printf("\n\t\tENTER THE ELEMENT TO BE INSERTED:\t");
	 scanf("%d",&x);
	 enqueue(x);
	 break;
	}
case 2:
	{
	 printf("\n\t\t2. DELETE FROM THE QUEUE");
	 printf("%d",dequeue());
	 break;
	}
case 3:
	{
	 printf("\n\t\t3. DISPLAY THE QUEUE");
	 display();
	 break;
	}
default:
	{
	 exit(1);
	}
}
}
}

    
