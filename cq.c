

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(){
	struct node *ptr;  
	int item; 
      
	ptr = (struct node *) malloc (sizeof(struct node));  
	
	printf("\n\t\tENTER THE ELEMENTS TO BE INSERTED:\t ");
	scanf("%d",&item);	

	ptr->data = item;
	ptr->next = NULL;
	if((rear==NULL)&&(front==NULL))
	{
		front = rear = ptr;
		rear->next = front;
	}
	else
	{
		rear->next = ptr;
		rear = ptr;
		ptr->next = front;
	}
    }

void dequeue(){
struct node* ptr;
	ptr = front;
	if((front==NULL)&&(rear==NULL))
		printf("\n\t\tQUEUE IS EMPTY");
	else if(front == rear){
		front = rear = NULL;
		free(ptr);
	}
	else{
		front = front->next;
		rear->next = front;
		free(ptr);
	}
	
}

void display(){

struct node* ptr;
	ptr = front;
	if((front==NULL)&&(rear==NULL)){
		printf("\n\t\tQUEUE IS EMPTY");
		}
	else{
		do{
			printf("\n%d",ptr->data);
			ptr = ptr->next;
		}while(ptr != front);
	}

printf("\n");

}

int main(){

int choice=0;

while (choice!=4){
	printf("\n\t\t OPERATIONS USING C QUEUE \n");
	printf("\n-----------------------------\n");
	printf("\n\t\t1. INSERT AN ELEMENT:\n");
	printf("\n\t\t2. REMOVE AN ELEMNT:\n");
	printf("\n\t\t3. DISPLAY:\n");
	printf("\n\t\t4. EXIT\n");

	
	printf("\n\n\t\tENTER YOUR CHOICE:\t ");
	scanf("%d",&choice);

	switch(choice){
		case 1: enqueue();
			break;

		case 2: dequeue();
			break;

		case 3: display();
			break;

		case 4: return 0;
			break;
}

}

}

    
