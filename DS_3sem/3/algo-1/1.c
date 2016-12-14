// Header Files
#include<stdio.h>
#include<malloc.h>
// Structure 
typedef struct node{
	int info;
	struct node *next;
}ntype;
// Function Prototype
ntype* push(ntype*,int);
ntype* pop(ntype*);
void display(ntype*);
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
			START = push(START,ITEM);
		break;
		case 2: START = pop(START); break;
		case 3: display(START);break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}
// Function Definition
ntype* push(ntype* START,int ITEM){
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
return START;
}
ntype* pop(ntype* START){
	ntype* TEMP;
	TEMP = START;
	if( START != NULL){
		printf("Popped element is %d\n",START->info);
		START = START->next;
		// Deallocated the memory
		free(TEMP);
	}
return START;
}
void display(ntype* START){
	while(START!=NULL){
		printf("%d ",START->info);
		START = START->next;
	}
	printf("\n");
}
