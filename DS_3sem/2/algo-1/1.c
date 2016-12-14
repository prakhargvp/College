// Implementing Queue using Static Array
// Header Files
#include<stdio.h>
// Symbolic Constant 
#define MAX 4
// Function Prototype
int insert(int [],int,int,int);
int serve(int [],int,int);
void traverse(int [],int,int);
// Main Calling Function
int main(){
	int QUEUE[MAX],LEFT=-1,RIGHT=-1,ITEM;
	int choice=0;
	do{
		printf("Enter the Choice : 1.Push 2.Pop 3.Display 4.Exit : ");
		scanf("%d",&choice);
		switch(choice){
		case 1: 
			printf("Enter Element : ");
			scanf("%d",&ITEM);	
			RIGHT = insert(QUEUE,LEFT,RIGHT,ITEM);
			if(LEFT==-1){
				LEFT=RIGHT;
			}
		break;
		case 2: LEFT = serve(QUEUE,LEFT,RIGHT); 
			if(LEFT==-1){
				RIGHT=LEFT;
			}
		break;
		case 3: traverse(QUEUE,LEFT,RIGHT);break;
		case 4: printf("EXIT\n");break;
		default: printf("Wrong Choice\n");break;
		}
	}while(choice!=4);	
return 0;
}

// Function Definition
int insert(int QUEUE[],int LEFT,int RIGHT,int ITEM){
	// Check Whether Queue is FUll 
	if((LEFT==0 && RIGHT==MAX-1) || (LEFT==RIGHT+1)){
		printf("Queue is FULL\n");
	}else{
		if(RIGHT==MAX-1){
			RIGHT=-1;	
		}
		RIGHT = RIGHT + 1;
		QUEUE[RIGHT] = ITEM;
	}
return RIGHT;
}
int serve(int QUEUE[],int LEFT,int RIGHT){
	if(LEFT==-1){
		printf("Queue is Empty\n");
	}else{
		printf("Poped Element is %d\n",QUEUE[LEFT]);
		// If LEFT equal to MAX-1 then SET LEFT to 0 ie -1 + 1
		if(LEFT==RIGHT){
			LEFT=-1;
		}
		else if(LEFT==MAX-1){
			LEFT=0;
		}else{
			LEFT++;
		}
	}
return LEFT;
}
void traverse(int QUEUE[],int LEFT,int RIGHT){
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
