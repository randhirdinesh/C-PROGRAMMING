

#include<stdio.h>
#include<stdlib.h>
void getlist(int);            					  //function declaration
void printlist();
void insbegin();
void insend();
void inspos();
void delbegin();
void delend();
void delany();

struct node                  				          //global declaration
	{
	int data;
	struct node *next;
	};
struct node *head,*new,*temp,*prev;
int size=0,x;

void getlist(int m)            					 //function to get linked list
{
 while(temp!=NULL)
 {
  scanf("%d",&m);
  if(m!=-999)
  {
   temp->data=m;
   temp->next=(struct node *)malloc(sizeof(struct node));
   prev=temp;
   temp=temp->next;
   size++;
  }
  else
  {
   prev->next=NULL;
   temp=NULL;
  }
 }
}

void printlist()           					//function to print linked list
{
 int size=0;
 temp=head;
 while(temp!=NULL)
 {
  printf("%d ",temp->data);
  temp=temp->next;
 }
}

void insbegin()							//function to insert to the beginning of a linked list
{
printf("\n\t\t1.INSERT AT THE BEGINNING");
new = (struct node*)malloc(sizeof(struct node));
printf("\n\t\tENTER THE ELEMENT TO BE INSERTED:\t");
scanf("%d",&x);
new->data=x;
new->next=head;
head=new;
size++;
printf("THE NEW LINKED LIST IS:\t");
printlist();
}

void insend()							//function to insert to the end of a linked list
{
printf("\n\t\t2.INSERTION AT END");
new = (struct node*)malloc(sizeof(struct node));
printf("\n\t\tENTER THE ELEMENT TO BE INSERTED:\t");
scanf("%d",&x);

temp=head;
while(temp->next!=NULL)
{
 temp=temp->next;
}
new->data=x;
new->next=NULL;
temp->next=new;
size++;
printf("\n\t\tTHE NEW LINKED LIST IS:\t");
printlist();
}

void inspos()							//function to insert at any position in a linked list
{
int pos,i;
printf("\n\t\t3.INSERTION AT ANY POSITION");
new = (struct node*)malloc(sizeof(struct node));
printf("\n\t\tENTER THE ELEMENT TO BE INSERTED:\t");
scanf("%d",&x);
printf("\n\t\tENTER THE POSITION TO BE INSERTED:\t");
scanf("%d",&pos);
temp=head;
if(pos<1||pos>size+1)
{
 printf("\n\n\t\t---INVALID POSITION!---\t\t\n\n");
}
else
{
 for(i=2;i<pos;i++)
 {
  if(temp->next!=NULL)
  {
   temp=temp->next;
  }
 }
 new->data=x;
 new->next=temp->next;
 temp->next=new;
}
size++;
printf("\n\t\tTHE NEW LINKED LIST IS:\t");
printlist();
}

void delbegin()							//function to delete from the beginning of a linked list
{
printf("\n\t\t4.DELETE AT THE BEGINNING");
prev=head;
head=head->next;
free(prev);
size--;
printf("\n\t\tTHE NEW LINKED LIST AFTER DELETION:\t");
printlist();
}

void delend()							//function to delete from the end of a linked list
{
printf("\n\t\t5.DELETE AT THE END");
temp=head;
while(temp->next->next!=NULL)
{
 temp=temp->next;
}
prev=temp->next;
temp->next=NULL;
free(prev);
size--;
printf("\n\t\tTHE NEW LINKED LIST AFTER DELETION:");
printlist();
}

void delany()							//function to delete any node in a linked list
{
printf("\n6.DELETE ANY NODE");
printf("\nENTER THE ELEMENT TO BE DELETED:");
scanf("%d",&x);
temp=head;
while(temp->next->data!=x)
{
 temp=temp->next;
}
prev=temp->next;
temp->next=temp->next->next;
free(prev);
size--;
printf("THE NEW LINKED LIST IS:");
printlist();
}

void main()
{
int ch;
char choice;

head=(struct node *)malloc(sizeof(struct node));
temp=head;

printf("ENTER THE ELEMENTS(enter -999 to stop):");
getlist(x);
printf("THE ELEMENTS ARE=");
printlist();

do
{
printf("\n\t\tLINKED LIST OPERATIONS");
printf("\n\t\t1. INSERT AT BEGGINING");
printf("\n\t\t2. INSERT AT END");
printf("\n\t\t3. INSEET AT ANY POSITION");
printf("\n\t\t4. DELETE AT BEGINNING");
printf("\n\t\t5. DELETE AT END");
printf("\n\t\t6. DELETE ANY NODE");
printf("\n\t\tENTER YOUR CHOICE:\t");
scanf("%d",&ch);
 switch(ch)
 {
 case 1:
	{
	 insbegin();
	 break;
	}
 case 2:
	{
	insend();
	break;
	}
 case 3:
	{
	inspos();
	break;
	}
 case 4:
	{
	 delbegin();
	 break;
	}
 case 5:
	{
	 delend();
	 break;
	}
 case 6:
	{
	 delany();
	 break;
	}
 default:
	{
	 printf("\n\t\t---INVALID CHOICE!!!---");
	 break;
	}
 }
printf("\n\t\tDO YOU WANT TO CONTINUE?(PRESS y/n):\t");
scanf(" %c",&choice);
}while(choice=='y'|| choice=='Y');
}

   
