// Implementing Queue using Static Array
// Header Files
#include<stdio.h>
// Symbolic Constant 
#define MAX 5
// Global Variable
int LEFT=-1,RIGHT=-1;
int QUEUE[MAX];
// Function Prototype
void insert(int);
void serve();
void traverse();
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
			insert(ITEM);
		break;
		case 2: serve(); 
		break;
		case 3: traverse();break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}

// Function Definition
void insert(int ITEM){
	// Check Whether Queue is FUll 
	if((LEFT==0 && RIGHT==MAX-1) || (LEFT==RIGHT+1)){
		printf("Queue is FULL\n");
	}else{
		// Insert ELement in Empty Queue
		if(LEFT==-1){
			LEFT=0;
		}
		// Set RIGHT to 0 if RIGHT equals to Maximum size but LEFT is not equal to 0
		if(RIGHT==MAX-1){
			RIGHT=-1;	
		}
		RIGHT = RIGHT + 1;
		QUEUE[RIGHT] = ITEM;
	}
}
void serve(){
	if(LEFT==-1){
		printf("Queue is Empty\n");
	}else{
		printf("Poped Element is %d\n",QUEUE[LEFT]);
		// If LEFT equal to MAX-1 then SET LEFT to 0 ie -1 + 1
		if(LEFT==RIGHT){
			LEFT=RIGHT=-1;
		}
		else if(LEFT==MAX-1){
			LEFT=0;
		}else{
			LEFT++;
		}
	}
}
void traverse(){
	int i;
	if(LEFT==-1){
		printf("Queue is Empty\n");
	}else{
		if(LEFT<=RIGHT){
			for(i=LEFT;i<=RIGHT;i++){
				printf("%d ",QUEUE[i]);
			}
		}else{
			for(i=LEFT;i<MAX;i++){
				printf("%d ",QUEUE[i]);
			}
			for(i=0;i<=RIGHT;i++){
				printf("%d ",QUEUE[i]);
			}
		}
		printf("\n");
	}
}
