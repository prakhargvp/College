// Implementing Stack using Static Array
// Header Files
#include<stdio.h>
// Symbolic Constant 
#define MAX 50
// Function Prototype
int push(int [],int,int);
int pop(int [],int);
void display(int [],int);
// Main Calling Function
int main(){
	int STACK[MAX],TOP=-1,ITEM;
	int choice=0;
	do{
		printf("Enter the Choice : 1.Push 2.Pop 3.Display 4.Exit : ");
		scanf("%d",&choice);
		switch(choice){
		case 1: 
			printf("Enter Element : ");
			scanf("%d",&ITEM);	
			TOP = push(STACK,TOP,ITEM);
		break;
		case 2: TOP = pop(STACK,TOP); break;
		case 3: display(STACK,TOP);break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}

// Function Definition
int push(int STACK[],int TOP,int ITEM){
	if(TOP==MAX-1){
		printf("Stack is FULL\n");
	}else{
		TOP = TOP + 1;
		STACK[TOP] = ITEM;
	}
return TOP;
}
int pop(int STACK[],int TOP){
	if(TOP==-1){
		printf("Stack is Empty\n");
	}else{
		printf("Poped Element is %d\n",STACK[TOP]);
		TOP = TOP - 1;
	}
return TOP;
}
void display(int STACK[],int TOP){
	int i;
	if(TOP==-1){
		printf("Stack is Empty\n");
	}else{
		for(i=0;i<=TOP;i++){
			printf("%d ",STACK[i]);
		}
		printf("\n");
	}
}
