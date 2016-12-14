// Header Files
#include<stdio.h>
#include<malloc.h>
// Structure 
typedef struct node{
	int info;
	struct node *next;
}ntype;
// GLobal Varaibles
ntype *LEFT=NULL,*RIGHT=NULL;
// Function Prototype
void insert(int);
void serve();
void display();
// Main Calling Function
int main(){
	int choice,ITEM;
	do{
		printf("Enter the Choice : 1.Push 2.Pop 3.Display 4.Exit : ");
		scanf("%d",&choice);
		switch(choice){
		case 1: 
			printf("Enter Element : ");
			scanf("%d",&ITEM);	
			insert(ITEM);
			if(LEFT==NULL){
				LEFT=RIGHT;
			}
		break;
		case 2: serve(); 
			if(LEFT==NULL){
				RIGHT=LEFT;
			}
		break;
		case 3: display();break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}
// Function Definition
void insert(int ITEM){
	ntype *PTR;
	PTR = (ntype*)malloc(sizeof(ntype));
	if(PTR==NULL){
		printf("NOT Enough Memory\n");
	}else{
		PTR->info = ITEM;
		PTR->next = NULL;
		if(RIGHT != NULL){
			RIGHT->next=PTR;
		}
		RIGHT=PTR;
	}
}
void serve(){
	ntype* TEMP;
	TEMP = LEFT;
	if(LEFT != NULL){
		printf("Popped element is %d\n",LEFT->info);
		LEFT = LEFT->next;
		// Deallocated the memory
		free(TEMP);
	}
}
void display(){
	ntype *TEMP;
	TEMP = LEFT;
	while(TEMP!=NULL){
		printf("%d ",TEMP->info);
		TEMP = TEMP->next;
	}
	printf("\n");
}
