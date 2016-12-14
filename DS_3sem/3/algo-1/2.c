// Header Files
#include<stdio.h>
#include<malloc.h>
// Structure 
typedef struct node{
	int info;
	struct node *next;
}ntype;
// Global Varaibel
ntype *START;
// Function Prototype
void push(int);
void pop();
void display();
// Main Calling Function
int main(){
	ntype *START=NULL;
	int choice,ITEM;
	do{
		printf("Enter the Choice : 1.Push 2.Pop 3.Display 4.Exit : ");
		scanf("%d",&choice);
		switch(choice){
		case 1: 
			printf("Enter Element : ");
			scanf("%d",&ITEM);	
			push(ITEM);
		break;
		case 2: pop(); break;
		case 3: display();break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}
// Function Definition
void push(int ITEM){
	ntype *PTR;
	PTR = (ntype*)malloc(sizeof(ntype));
	if(PTR==NULL){
		printf("NOT Enough Memory\n");
	}else{
		PTR->info = ITEM;
		PTR->next = NULL;
		if(START != NULL){
			PTR->next=START;
		}
		START=PTR;
	}
}
void pop(){
	ntype* TEMP;
	TEMP = START;
	if( START != NULL){
		printf("Popped element is %d\n",START->info);
		START = START->next;
		// Deallocated the memory
		free(TEMP);
	}
}
void display(){
	ntype *TEMP;
	TEMP = START;
	while(TEMP!=NULL){
		printf("%d ",TEMP->info);
		TEMP = TEMP->next;
	}
	printf("\n");
}
