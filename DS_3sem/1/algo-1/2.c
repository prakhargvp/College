// Implementing Stack using Static Array
// Header Files
#include<stdio.h>
// Symbolic Constant 
#define MAX 50
// Global Variables
int STACK[MAX],TOP=-1;
// Function Prototype
void push(int);
void pop();
void display();
// Main Calling Function
int main(){
	int ITEM;
	int choice=0;
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
	if(TOP==MAX-1){
		printf("Stack is FULL\n");
	}else{
		TOP = TOP + 1;
		STACK[TOP] = ITEM;
	}
}
void pop(){
	if(TOP==-1){
		printf("Stack is Empty\n");
	}else{
		printf("Poped Element is %d\n",STACK[TOP]);
		TOP = TOP - 1;
	}
}
void display(){
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
